//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll unsigned long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e5+9;
ll LCM(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}
void solve ()
{
    int n, a, b, p, q; cin >> n >> a >> b >> p >> q;
    ll ans = 0;
    ll lcm = LCM (a, b);
    lcm = n/lcm;
    ans = 1LL * max (p, q) * (lcm);
    ll temp = n / a;
    temp -= lcm;
    ans += (temp * p);
    temp = n/b;
    temp-= lcm;
    ans += (temp * q);
    cout << ans << endl;
}

int main ()
{
    speed;
    solve();
    return 0;
}