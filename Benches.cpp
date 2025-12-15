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
    ll m;cin>>m;
    vector<ll>vv(x);
    for (auto &x:vv)cin>>x;
    sort(vv.begin(),vv.end());
    ll mx=vv[x-1];
    ll total=0;
    for (int i=0;i<x;i++){
        total+=mx-vv[i];
    }
    ll mx_ans=mx+m;
    if (m<=total){
        cout<<mx<<sp<<mx_ans<<endl;return;
    }else{
        ll last_total=m-total;
        for (int i=0;i<x;i++){
            vv[i]=mx;
        }
        ll val=last_total/x;
        for (int i=0;i<x;i++){
            vv[i]+=val;
        }
        ll mod=last_total%x;
        sort(vv.begin(),vv.end());
        for (int i=0;i<x;i++){
            if (mod==0)break;
            vv[i]++;
            mod--;
        }
        ll ans=*max_element(vv.begin(),vv.end());
        cout<<ans<<sp<<mx_ans<<endl;
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