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
    ll x;cin>>x;
    vector<ll>vv(x);
    for (auto &x:vv)cin>>x;
    auto old=vv;
    for (int i=1;i<x-1;i++){
        vv[i]=abs(vv[i]);
    }
    vv[x-1]*=-1;
    for (int i=1;i<x;i++){
        vv[i]+=vv[i-1];
        old[i]+=old[i-1];
    }
    ll ans=LLONG_MIN;
    for (int i=0;i<x;i++){
        ll left=i?vv[i-1]:0;
        ll right=old[x-1]-old[i];
        ans=max(ans,left-right);
    }
    cout<<ans<<endl;
    // ll l=0,r=1;
    // ll ans=0;
    // if (x==2){
    //     cout<<max(0-vv[1],vv[0])<<endl;
    //     return;
    // }
    // while (r<x){
    //     if (vv[l]>=0 and vv[r]>=0){
    //         ans+=vv[l];
    //         l=r;
    //         r++;
    //     }else if (vv[l]<0 and vv[r]<0){
    //         ans-=vv[r];
    //         r++;

    //     }else if (vv[l]>=0 and vv[r]<0){
    //         ll temp=ans+vv[l];
    //         ll temp2=ans-vv[r];
    //         if (temp>temp2){
    //             ans=temp;
    //             l=r;
    //             r++;
    //         }else {
    //             ans=temp2;
    //             r++;
    //         }


    //     }else  {
    //         ans+=vv[l];
    //         l=r;
    //         r++;
    //     }
    // }
    // cout<<ans<<endl;
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