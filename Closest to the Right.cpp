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
void solve ()
{
    ll x,k;cin>>x>>k;
    vector<ll>vv(x+1),q(k+1);
    for (int i=1;i<=x;i++)
        cin>>vv[i];
    for (int i=1;i<=k;i++)cin>>q[i];
    for (int i=1;i<=k;i++){
        ll val=q[i];
        ll l=1,r=x;
        ll ans=0;
        while (l<=r){
            ll mid=(l+r)/2;
            if (vv[mid]>=val){
                r=mid-1;
                ans=mid;
            }else{
                l=mid+1;
                
            }
        }
        if (ans==0)cout<<x+1<<endl;
        else
        cout<<ans<<endl;
    }
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