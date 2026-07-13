//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=131072+9;
int a[N];
ll t[4*N];

ll marge_or (int l, int r) {
    return (l|r);
}
ll marge_xor (int l, int r) {
    return (l^r);
}
void build (int n, int b, int e, int level) {
    if (b == e)  {
        t[n] = a[b];
        return;
    }
    int mid = (b + e) >> 1, l = 2*n, r = 2*n + 1;
    build (l, b, mid, level+1);
    build (r, mid+1, e, level+1);
    if (level & 1) {
        t[n] = marge_or (t[l], t[r]);
    }else {
        t[n] = marge_xor (t[l], t[r]);
    }
    
}
void update (int n, int b, int e, int i, int val, int level) {
    if (i < b or i > e) return;
    if (b == e and b == i) {
        t[n] = val;
        return;
    }
    int mid = (b + e) >> 1, l = 2*n, r = 2*n + 1;
    update (l, b, mid, i, val, level+1);
    update (r, mid+1, e, i, val, level+1);
    if (level&1)
    t[n] = marge_or (t[l], t[r]);
    else 
    t[n] = marge_xor (t[l], t[r]);
}
void solve ()
{
    int n, m; cin >> n >> m;
    int st = (n&1) ? 1:0;
    n = 1 << n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build (1, 1, n, st);
    while (m--) {
        int i, val; cin >> i >> val;
        update (1, 1, n, i, val, st);
        cout << t[1] << endl;
    }
}

int main ()
{
    speed;
    solve();
    return 0;
}