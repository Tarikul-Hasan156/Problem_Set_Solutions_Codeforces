//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
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
const int S=64;
void solve ()
{
    ll a,b;cin>>a>>b;
    bitset<S>l(a),r(b);
    if (a==b){
        cout<<0<<endl;return;
    }
    int index=0;
    for (int i=0;i<(int)r.size();i++){
        if (r[i]!=l[i]){
            index=i;
        }
    }
    // cout<<r<<endl;
    // cout<<l<<endl;
    ll ans=0;
    for (int i=0;i<=index;i++){
        ans+=(1LL<<i);
    }
    cout<<ans<<endl;
    // int index=63-__builtin_clzll(b);
    // for (int i=0;i<=index;i++){
    //     if (r[i]==1){
    //         res.reset(i);
    //     }else res.set(i);
    // }
    // cout<<r<<endl;
    // cout<<res<<endl;
    // cout<<res.to_ullong()<<endl;
    // bitset<S>temp(1024);
    // cout<<temp<<endl;
    // cout<<index<<sp<<63-__builtin_clzll(1024)<<endl;
    // if (res.to_ullong()>=a and res.to_ullong()<=b){
    //     cout<<(res.to_ullong()^b)<<endl;return;
    // }
    // ll val=res.to_ullong();
    // for (int i=0;i<(int)res.size();i++){
    //     if (res[i]==1 and (val-(1<<i)>=a) and val-(1<<i)<=b){
    //         cout<<((val-(1<<i))^b)<<endl;return;
    //     }
    // }
    // for (int i=0;i<(int)res.size();i++){
    //     if (res[i]==0 and val+(1<<i)>=a and val+(1<<i)<=b){
    //          cout<<val+(1<<i)<<endl;
    //         cout<<((val+(1<<i))^b)<<endl;return;
    //     }
    // }
}

int main ()
{
    speed;
    solve();
    return 0;
}