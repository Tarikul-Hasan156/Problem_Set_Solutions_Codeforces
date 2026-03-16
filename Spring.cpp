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
ll lcm(ll a, ll b){
    return ((1LL*a*b)/__gcd(a,b));
}
void solve ()
{
    ll a,b,c;ll n;cin>>a>>b>>c>>n;
    ll x=n/lcm(a,lcm(b,c));
    ll y=n/lcm(a,b);
    ll z=n/lcm(a,c);
    // cout<<x<<sp<<y<<sp<<z<<endl;
    ll val_a=(n/a)*6;
    val_a-=(x*6);
    val_a+=(x*2);
    ll two=(y-x)+(z-x);
    val_a-=(two*6);
    val_a+=(two*3);
    y=n/lcm(a,b);
    z=n/lcm(b,c);
    two=(y-x)+(z-x);
    ll val_b=(n/b)*6;
    val_b-=(x*6);
    val_b+=(x*2);
    val_b-=(two*6);
    val_b+=(two*3);
    y=n/lcm(a,c);
    z=n/lcm(b,c);
    two=(y-x)+(z-x);
    ll val_c=(n/c)*6;
    val_c-=(x*6);
    val_c+=(x*2);
    val_c-=(two*6);
    val_c+=(two*3);
    cout<<val_a<<sp<<val_b<<sp<<val_c<<endl;
    
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