//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e5+9;

// struct custom_hash {
//   static uint64_t splitmix64(uint64_t x) {
//       x += 0x9e3779b97f4a7c15ULL;
//       x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9ULL;
//       x = (x ^ (x >> 27)) * 0x94d049bb133111ebULL;
//       return x ^ (x >> 31);
//   }
//
//   size_t operator()(uint64_t x) const {
//       static const uint64_t FIXED_RANDOM =
//           chrono::steady_clock::now().time_since_epoch().count();
//       return splitmix64(x + FIXED_RANDOM);
//   }
// };
ll LCM (ll a, ll b){
    return a*(b / (__gcd (a, b)));
}
void solve ()
{
    ll x; cin >> x;
    if (x == 1) {
        cout << 1 << sp << 1 << endl; return;
    }
    vector<pair<ll, ll>>pr;
    for (int i = 1; 1LL*i*i <= x; i++) {
        double temp = x / (1.0*i);
        if (temp == (ll) temp) {
            pr.push_back({i, x / i});
        }
    }
   ll mx = LLONG_MAX;
   pair < ll, ll > ans;
   for (auto [v1, v2]:pr) {
        // cout << v1 << ' ' << v2 << endl;
        ll temp = max(v1, v2);
        if (temp < mx and LCM (v1, v2) == x){
            ans.first=v1;
            ans.second=v2;
            temp = mx;
        }
   }
   cout << ans.first << sp << ans.second << endl;

}

int main ()
{
    speed;
    solve();
    return 0;
}