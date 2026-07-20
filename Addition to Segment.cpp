//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e5+9;
int a[N];
ll t[4*N], lazy[4*N];
void build (int n, int b, int e) {
    lazy[n] = 0;
    if (b == e) {
        t[n] = 0;
        return;
    }
    int mid  = (b + e) >> 1, l = 2*n, r = 2*n + 1;
    build (l, b, mid);
    build (r, mid+1, e);
}
void push (int n, int b, int e) {
    if (lazy[n] == 0) {
        return;
    }
    t[n] = t[n] + lazy[n] * (e - b + 1);
    int l = 2*n, r = 2*n + 1;
    if (b != e) {
        lazy[l] = lazy[l] + lazy[n];
        lazy[r] = lazy[r] + lazy[n];
    }
    lazy[n] = 0;
}
void update (int n, int b, int e, int  i, int j, int v) {
    push (n, b, e);
    if (i > e or j < b) return;
    if (b >= i and e <= j) {
        lazy[n] += v;
        push(n, b, e);
        return;
    }
    int mid = (b + e) >> 1, l = 2*n, r = 2*n + 1;
    update (l, b, mid, i, j, v);
    update (r, mid+1, e, i, j, v);
}
ll query (int n, int b, int e, int i) {
    push(n, b, e);
    if (i < b or i > e) return 0;
    if (b == e and e == i) {
        return t[n];
    }
    int mid = (b + e) >> 1, l = 2*n, r = 2*n + 1;
    if (i <= mid) {
        return query(l, b, mid, i);
    }else {
        return query (r, mid+1, e, i);
    }
}
void solve ()
{
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        a[i] = 0;
    }
    build (1, 1, n);
    while (m--) {
        int ty; cin >> ty;
        if (ty == 1) {
            int l, r, val; cin >> l >> r >> val;
            l++;
            update (1, 1, n, l, r, val);
        }else {
            int i; cin >> i;
            i++;
            cout << query (1, 1, n, i) << endl;
        }
    }
}

int main ()
{
    speed;
    solve();
    return 0;
}