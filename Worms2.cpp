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
ll n,m;
vector<ll>vv,pre,q;
bool check (ll &val,ll &value){
    return pre[val]>=value;
}
void solve ()
{
    cin>>n;
    vv.resize(n);
    pre.resize(n+1);
    for (auto &x:vv)cin>>x;
    for (int i=1;i<=n;i++){
        pre[i]=pre[i-1]+vv[i-1];
    }
    cin>>m;
    q.resize(m);
    for (auto &x:q)cin>>x;
    for (int i=0;i<m;i++){
        ll l=1,r=n;
        ll ans=0;
        while (l<=r){
            ll mid=(l+r)/2;
            if (check (mid,q[i])){
                r=mid-1;
                ans=mid;
            }else l=mid+1;
        }
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