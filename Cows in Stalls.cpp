//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp ' '
#define endl '\n'
using namespace std;

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
ll x,k;
vector<ll>vv;
bool check (ll val){
    ll cnt=1;
    ll l=vv[0];
    for (int i=1;i<x;i++){
        if (vv[i]-l>=val){
            cnt++;
            l=vv[i];
        }
    }
    return  cnt>=k;
}
void solve ()
{
    cin>>x>>k;
    vv.resize(x);
    for (auto &x:vv)cin>>x;
    ll l=0,r=1e9,ans=0;
    while (l<=r){
        ll mid=(l+r)/2;
        if (check(mid)){
            l=mid+1;
            ans=mid;
        }else r=mid-1;
    }
    cout << ans <<endl;
}

int main ()
{
    speed;
    // int tt;
    // cin >> tt;
    // while (tt--)
    // {
        solve();
    // }
    return 0;
}