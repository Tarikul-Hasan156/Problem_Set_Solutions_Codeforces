//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e5+9;
ll Legendre(long long n, long long p) {
    ll ans = 0;
    while (n) {
        ans += n / p;
        n /= p;
    }
    return ans;
}
int ca = 0;
void solve ()
{
    int q; cin >> q;
    int ans = 0;
    ll l = 1, r = (ll)1e10;
    while (l <= r) {
        ll mid = (l + r) / 2;
        int val = Legendre(mid, 5);
        // cout << mid << sp << val << endl;
        if (val >= q) {
            r = mid - 1;
            ans = mid;
        }else {
            l = mid + 1;
        }
    }
    if (Legendre(ans, 5) == q){
        cout << "Case " << ++ca <<": " << ans << endl;
    }else cout << "Case " << ++ca <<": " << "impossible" << endl;
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