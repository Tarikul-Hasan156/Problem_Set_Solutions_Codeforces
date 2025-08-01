// i just submit this problem for fun.....
// credit goes to ksun48.
#include <bits/stdc++.h>
using namespace std;
 
namespace std {
 
template<class Fun>
class y_combinator_result {
	Fun fun_;
public:
	template<class T>
	explicit y_combinator_result(T &&fun): fun_(std::forward<T>(fun)) {}
 
	template<class ...Args>
	decltype(auto) operator()(Args &&...args) {
		return fun_(std::ref(*this), std::forward<Args>(args)...);
	}
};
 
template<class Fun>
decltype(auto) y_combinator(Fun &&fun) {
	return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun));
}
 
} // namespace std
 
namespace ecnerwala {
 
using std::swap;
 
struct level_ancestor {
	int N;
	std::vector<int> preorder;
	std::vector<int> idx;
	std::vector<std::pair<int, int>> heavyPar; // heavy parent, distance
	level_ancestor() : N(0) {}
 
	level_ancestor(const std::vector<int>& par) : N(int(par.size())), preorder(N), idx(N), heavyPar(N) {
		std::vector<std::vector<int>> ch(N);
		for (int i = 0; i < N; i++) {
			if (par[i] != -1) ch[par[i]].push_back(i);
		}
		std::vector<int> sz(N);
		int nxt_idx = 0;
		for (int i = 0; i < N; i++) {
			if (par[i] == -1) {
				std::y_combinator([&](auto self, int cur) -> void {
					sz[cur] = 1;
					for (int nxt : ch[cur]) {
						self(nxt);
						sz[cur] += sz[nxt];
					}
					if (!ch[cur].empty()) {
						auto mit = max_element(ch[cur].begin(), ch[cur].end(), [&](int a, int b) { return sz[a] < sz[b]; });
						swap(*ch[cur].begin(), *mit);
					}
				})(i);
				std::y_combinator([&](auto self, int cur, int isRoot = true) -> void {
					preorder[idx[cur] = nxt_idx++] = cur;
					if (isRoot) {
						heavyPar[idx[cur]] = {par[cur] == -1 ? -1 : idx[par[cur]], 1};
					} else {
						assert(idx[par[cur]] == idx[cur]-1);
						heavyPar[idx[cur]] = heavyPar[idx[cur]-1];
						heavyPar[idx[cur]].second++;
					}
					bool chRoot = false;
					for (int nxt : ch[cur]) {
						self(nxt, chRoot);
						chRoot = true;
					}
				})(i);
			}
		}
	}
 
	int get_ancestor(int a, int k) const {
		assert(k >= 0);
		a = idx[a];
		while (a != -1 && k) {
			if (k >= heavyPar[a].second) {
				k -= heavyPar[a].second;
				assert(heavyPar[a].first <= a - heavyPar[a].second);
				a = heavyPar[a].first;
			} else {
				a -= k;
				k = 0;
			}
		}
		if (a == -1) return -1;
		else return preorder[a];
	}
 
	int lca(int a, int b) const {
		a = idx[a], b = idx[b];
		while (true) {
			if (a > b) swap(a, b);
			assert(a <= b);
			if (a > b - heavyPar[b].second) {
				return preorder[a];
			}
			b = heavyPar[b].first;
			if (b == -1) return -1;
		}
	}
 
	int dist(int a, int b) const {
		a = idx[a], b = idx[b];
		int res = 0;
		while (true) {
			if (a > b) swap(a, b);
			assert(a <= b);
			if (a > b - heavyPar[b].second) {
				res += b - a;
				break;
			}
			res += heavyPar[b].second;
			b = heavyPar[b].first;
			if (b == -1) return -1;
		}
		return res;
	}
};
 
} // namespace ecnerwala
 
 
void solve(){
	int N, M, st, en;
	cin >> N >> M >> st >> en;
	st--; en--;
	vector<vector<int> > tree(N);
	for(int i = 0; i < N-1; i++){
		int u, v;
		cin >> u >> v;
		u--; v--;
		tree[u].push_back(v);
		tree[v].push_back(u);
	}
	vector<int> par(N);
	y_combinator(
		[&](auto self, int v, int p) -> void {
			par[v] = p;
			for(int w : tree[v]){
				if(w == p) continue;
				self(w, v);
			}
		}
	)(0, -1);
	auto la = ecnerwala::level_ancestor(par);
	int TIME = 2 * N + 2;
	vector<vector<int> > blocked(TIME);
	for(int i = 0; i < M; i++){
		int a, b;
		cin >> a >> b;
		a--; b--;
		int l = la.lca(a, b);
 
		int idx = 0;
		while(a != l){
			blocked[idx].push_back(a);
			a = par[a];
			idx++;
		}
		idx += la.dist(b, l);
		while(b != l){
			blocked[idx].push_back(b);
			b = par[b];
			idx--;
		}
		blocked[idx].push_back(l);
	}
	vector<int> on(N, 0);
	vector<int> new_on = {st};
 
	vector<vector<int> > off_children(N);
	for(int i = 0; i < N; i++){
		if(par[i] >= 0) off_children[par[i]].push_back(i);
	}
	vector<int> on_children_cnt(N, 0);
	vector<int> found(N);
	for(int t = 0; t < TIME; t++){
		// check neighbors of new_on
		// check elements of new_off
		for(int x : new_on){
			if(!on[x]){
				on[x] = 1;
				if(par[x] >= 0) on_children_cnt[par[x]]++;
			}
		}
		vector<int> new_off;
		for(int x : blocked[t]){
			if(on[x]){
				on[x] = 0;
				new_off.push_back(x);
				if(par[x] >= 0){
					off_children[par[x]].push_back(x);
					on_children_cnt[par[x]]--;
				}
			}
		}
		// for(int x : on) cerr << x << ' ';
		// cerr << '\n';
		if(on[en]){
			cout << (t+1) << '\n';
			return;
		}
		// get neighbors for new_on
		vector<int> new_neighbors;
		for(int x : new_on){
			if(!on[x]) continue;
			if(par[x] >= 0 && !on[par[x]] && !found[par[x]]){
				found[par[x]] = 1;
				new_neighbors.push_back(par[x]);
			}
			while(!off_children[x].empty()){
				int v = off_children[x].back();
				off_children[x].pop_back();
				if(!on[v] && !found[v]){
					found[v] = 1;
					new_neighbors.push_back(v);
				}
			}
		}
		for(int x : new_off){
			if((par[x] >= 0 && on[par[x]]) || on_children_cnt[x] > 0){
				if(!found[x]){
					found[x] = 1;
					new_neighbors.push_back(x);
				}
			}
		}
		for(int x : new_neighbors) found[x] = 0;
		new_on = new_neighbors;
	}
	cout << -1 << '\n';
}
 
int main(){
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int T;
	cin >> T;
	while(T--) solve();
}