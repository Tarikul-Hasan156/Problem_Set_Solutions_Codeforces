//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e5+9, MAX = 1e9 + 9;
int a[N];
struct node
{
    int mn, cnt;
};
node t[4*N];
node marge (node l, node r) {
    node ans;
    ans.cnt = 0;
    ans.mn = min (l.mn, r.mn);
    if (ans.mn == l.mn) {
        ans.cnt += l.cnt;
    }
    if (ans.mn == r.mn) {
        ans.cnt += r.cnt;
    }
    return ans;
}
void build (int n, int b, int e) {
    if (b == e) {
        t[n].mn = a[b];
        t[n].cnt = 1;
        return;
    }
    int mid = (b + e) >> 1;
    int l = 2*n, r = 2*n + 1;
    build (l, b, mid);
    build (r, mid+1, e);
    t[n] = marge (t[l], t[r]);
}
void update (int n, int b, int e, int i, int val) {
    if (i < b or i > e) return;
    if (b == e and b == i) {
        t[n].mn = val;
        t[n].cnt = 1;
        return;
    }
    int mid = (b + e) >> 1, l = 2*n, r = 2*n + 1;
    update (l, b, mid, i, val);
    update (r, mid+1, e, i, val);
    t[n] = marge (t[l], t[r]);
}
node query (int n, int b, int e, int i, int j) {
    if (e < i or b > j) return {MAX, 1};
    if (b >= i and e <= j) {
        return {t[n].mn, t[n].cnt};
    }
    int mid = (b + e) >> 1, l = 2*n, r = 2*n + 1;
    return marge (query (l, b, mid, i, j), query(r, mid+1, e, i, j));
}
void solve ()
{
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build (1, 1, n);
    while (q--) {
        int ty, a, b; cin >> ty >> a >> b;
        if (ty == 1) {
            update (1, 1, n, ++a, b);
        }else {
            node ans = query (1, 1, n, ++a, b);
            cout << ans.mn << sp << ans.cnt << endl;
        }

    }

}

int main ()
{
    speed;
    solve();
    return 0;
}