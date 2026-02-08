//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=2e5+9;

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
const ll mod=1e9+7;
int pw[N];
void solve ()
{
    int n,m;cin>>n>>m;
    ll val=0;
    while (m--){
        int x,y,target;cin>>x>>y>>target;
        val|=target;
    }
    ll res=pw[n-1];
    // for (int i=1;i<n;i++){
    //     res=1LL*res*2%mod;
    // }
    res=res*val%mod;
    cout<<res<<endl;
}

int main ()
{
    speed;
    int tt;
    pw[0]=1;
    for (int i=1;i<N;i++){
        pw[i]=pw[i-1]*2%mod;
    }
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}