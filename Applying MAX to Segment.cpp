//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e5+9;
int a[N];
int t[4*N], lazy[4*N];
void build (int n, int b, int e) {
    lazy[n] = 0;
    if (b == e) {
        t[n] = a[b];
        return;
    }
    int mid = (b + e) >> 1, l = 2*n, r = 2*n + 1;
    build (l, b, mid);
    build (r, mid+1, e);
}
void push (int n, int b, int e) {
    if (lazy[n] == 0) {
        return;
    }
    t[n] = max (t[n], lazy[n]);
    int l = 2*n, r = 2*n + 1; 
    if (b  != e) {
        lazy[l] = max (lazy[l], lazy[n]);
        lazy[r] = max (lazy[r], lazy[n]);
    }
    lazy[n] = 0;
}
void update (int n, int b, int e, int i, int j, int v) {
    push (n, b, e);
    if (j < b or i > e) return;
    if (b >= i and e <= j) {
        lazy[n] = v;
        push (n, b, e);
        return;
    }
    int mid = (b + e) >> 1, l = 2*n, r = 2*n + 1;
    update (l, b, mid, i, j, v);
    update (r, mid+1, e, i, j, v);
}
int query (int n, int b, int e, int i) {
    push (n, b, e);
    if (i < b or i > e) return 0;
    if (b == e and e == i) {
        return t[n];
    }
    int mid = (b + e) >> 1, l = 2*n, r = 2*n + 1;
    if (i <= mid) {
        return query (l, b, mid, i);
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
    while (m--) {
        int ty; cin >> ty;
        if (ty == 1) {
            int i, j , val; cin >> i >> j >> val;
             i++;
            update (1, 1, n, i, j, val);
        }else {
            int idx; cin >> idx;
            idx++;
             cout << query (1, 1, n, idx) << endl;
        }
    }
}

int main ()
{
    speed;
    solve();
    return 0;
}