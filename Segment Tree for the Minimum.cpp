//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e5+9;
const int MAX = 1e9+9;
int a[N];
int t[4*N];
void build_tree (int node, int b, int e) {
    if (b == e) {
        t[node] = a[b];
        return;
    }
    int mid = (b + e) >> 1;
    int l = 2*node, r = 2*node + 1;
    build_tree (l, b, mid);
    build_tree (r, mid+1, e);
    t[node] = min (t[l], t[r]);
}
void update (int node, int b, int e, int i, int val) {
    if (i < b or i > e) return;
    if (b == e and b == i) {
        t[node] = val;
        return;
    }
     int mid = (b + e) >> 1;
     int l = 2*node, r = 2*node + 1;
     update (l, b, mid, i, val);
     update (r, mid+1, e, i, val);
     t[node] = min (t[l], t[r]);
}
ll query (int node, int b, int e, int i, int j) {
    if (j < b or i > e) return MAX;
    if (b >= i and e <= j) return t[node];
    int mid = (b + e) >> 1;
    int l = 2*node, r = 2*node + 1;
    return min(query (l, b, mid, i, j), query (r, mid+1, e, i, j));
}
void solve ()
{
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    // for (int i = 1; i <= n; i++) cout << a[i] << sp; cout << endl;
    build_tree(1, 1, n);
    while (m--) {
        int op, a, b; cin >> op >> a >> b;
        // ++a, ++b;
        if (op == 1) {
            update (1, 1, n, ++a, b);
        }else {
            cout << query (1, 1, n, ++a, b) << endl;
        }
    }

}

int main ()
{
    speed;
    solve();
    return 0;
}