// بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define sp " "
#define forn(i, n) for (int i = 0; i < (n); i++)
#define speed ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll int64_t
using namespace std;

void solve() {
    int x; 
    cin >> x;
    vector<ll> vv(x);
    forn(i, x) cin >> vv[i];

    sort(vv.begin(), vv.end());

    ll mn = vv.front();
    ll mx = vv.back();
    ll ans = mx - mn;

    ll cntMin = 0, cntMax = 0;
    forn(i, x) {
        if (vv[i] == mn) cntMin++;
        if (vv[i] == mx) cntMax++;
    }

    ll last;
    if (ans == 0) {
        last = 1LL * x * (x - 1) / 2;
    } else {
        last = cntMin * cntMax;
    }

    cout << ans << sp << last << endl;
}

int main() {
    speed;
    solve();
    return 0;
}
