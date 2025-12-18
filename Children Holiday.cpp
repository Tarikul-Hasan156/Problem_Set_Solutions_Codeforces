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
ll m,x;
vector<pair<ll,pair<ll,ll>>>vv;
vector<ll>last;
// void print (ll val){
//     for (int i=0;i<x;i++){
//         ll temp=((vv[i].first*vv[i].second.first)+vv[i].second.second);
//         ll temp_ballon=val/temp;
//         temp_ballon=(temp_ballon*vv[i].second.first);
//         ll mod=val%temp;
//         if (mod>(vv[i].first*vv[i].second.first)){
//              temp_ballon+=(vv[i].first*vv[i].second.first);
//         }else{
         // if (mod==0)continue;
        // else{
            //  if ((mod/vv[i].first)>vv[i].second.first){
            //     temp_ballon+=vv[i].second.first;
            // }else
            // temp_ballon+=mod/vv[i].first;
        // }
//         }
//         cout<<temp_ballon<<sp;
//     }
//     cout<<endl;
// }
bool check (ll val){
    ll cnt=0;
    ll left=m;
    for (int i=0;i<x;i++){
        ll temp=((vv[i].first*vv[i].second.first)+vv[i].second.second);
        ll temp_ballon=val/temp;
        temp_ballon=(temp_ballon*vv[i].second.first);
        ll mod=val%temp;
        temp_ballon+=min(mod/vv[i].first,vv[i].second.first);
        cnt+=temp_ballon;
        if (left==0){
            last[i]=0;
        }else{
            last[i]=min(temp_ballon,left);
        left-=min(temp_ballon,left);
        }
        
    }
    return cnt>=m;
}
void solve ()
{
    cin>>m>>x;
    last.resize(x);
    for (int i=0;i<x;i++){
        ll t,z,y;cin>>t>>z>>y;
        vv.push_back({t,{z,y}});
    }
    // for (auto it:vv){
    //     cout<<it.first<<sp<<it.second.first<<sp<<it.second.second<<endl;
    // }
    // if (m==0){

    // }
    ll l=0,r=1e9;
    ll ans=0;
    while (l<=r){
        ll mid=(l+r)/2;
        if (check(mid)){
            // cout<<mid<<endl;
            ans=mid;
            r=mid-1;
        }else l=mid+1;
    }
    cout<<ans<<endl;
    auto it=check(ans);
    for(int i=0;i<x;i++){
        cout<<last[i]<<sp;
    }
    cout<<endl;
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