//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e5+9;
int a[N];
struct node {
    int first_element, last_element;
    int first_element_cnt, last_element_cnt;
    int strongest_com;
};
node t[4*N];
node marge (node l, node r) {
    if (l.first_element == -1) {
        return r;
    }
    if (r.first_element == -1) {
        return l;
    }
    node ans;
    ans.first_element = l.first_element;
    ans.last_element = r.last_element;
    ans.first_element_cnt = l.first_element_cnt;
    if (l.first_element == r.first_element) {
        ans.first_element_cnt += r.first_element_cnt;
    }
    ans.last_element_cnt =  r.last_element_cnt;
    if (l.last_element == r.last_element) {
        ans.last_element_cnt += l.last_element_cnt;
    }
    ans.strongest_com = max (l.strongest_com, r.strongest_com);
    if (l.last_element == r.first_element) {
        ans.strongest_com = max (ans.strongest_com, l.last_element_cnt+r.first_element_cnt);
    }
    return ans;
}
void build (int n, int b, int e) {
    if (b == e) {
        t[n].first_element = t[n].last_element = a[b];
        t[n].first_element_cnt = t[n].last_element_cnt = 1;
        t[n].strongest_com = 1;
        return;
    }
    int mid = (b + e) >> 1, l = 2*n, r = 2*n + 1;
    build (l, b, mid);
    build (r, mid+1, e);
    t[n] = marge(t[l], t[r]);
}
node query (int n, int b, int e, int i, int j) {
    if (b > j or e < i) return {-1, -1, -1, -1, -1};
    if (b >= i and e <= j) {
        return t[n];
    }
    int mid = (b + e) >> 1, l = 2*n, r = 2*n + 1;
    return marge (query(l, b, mid, i, j), query(r, mid+1, e, i, j));
}
int ca = 0;
void solve ()
{
    int n, c, q; cin >> n >> c >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build (1, 1, n);
    cout << "Case " << ++ca <<":\n";
    while (q--) {
        int l, r; cin >> l >> r;
        auto ans = query (1, 1, n, l, r);
        cout << ans.strongest_com << endl;
    }
    

}

int main ()
{
    speed;
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}