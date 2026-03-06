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
// vector<ll>a,pre;
const int mod=998244353;
// int F (int val){
//     return (1LL*val*(val+1))/2;
// }
// int S(int l, int r){
//     return F(r)-F(l-1);
// }
// int x_or(int l, int r){
//     int temp=0;
//     for (int i=l;i<=r;i++){
//         temp^=a[i];
//     }
//     return temp;
// }
void add(ll &a,ll x){
    a+=x;
    a%=mod;
}
void solve ()
{
    int n;cin>>n;
    // a.resize(n+1);
    // pre.resize(n+1);
    // for (int i=1;i<=n;i++)cin>>a[i];
    // for (int i=1;i<=n;i++){
    //     pre[i]=(pre[i-1]^a[i]);
    // }
    // ll ans=0;
    // for (int i=1;i<=n;i++){
    //     int first=1LL*i*S(i,n)%mod;
    //     int second=1LL*S(i,i)-(n-i+1)%mod;
    //     int contrib=i*(n-i+1);
    //     if ((first-second+i*(n-i+1))&1){
    //         ans+=1LL*pre[i]*(first-second+1LL*i*(n-i+1))%mod;
    //     }
    //     ans%=mod;
    // }
    // cout<<ans<<endl;
    // for (int i=1;i<=n;i++){
    //     for (int j=i;j<=n;j++){
    //         int x_or=pre[j]^pre[i-1];
    //         ans+=1LL*x_or*(j-i+1)%mod;
    //         ans%=mod;
    //     }
    // }
    // cout<<ans<<endl;
    vector<int>a(n);
    for (auto &x:a)cin>>x;
    ll ans=0;
    for (int i=0;i<31;i++){
        ll sum=0;
        ll on=0,onc=0,of=0,ofc=0;
        for (int j=0;j<n;j++){
            add(on,onc);add(of,ofc);
            if (a[j]>>i&1){
                swap(on,of);
                swap(onc,ofc);
                on++,onc++;
            }else{
                of++,ofc++;
            }
            add(sum,on);
        }
        add(ans,(sum<<i));
    }
    cout<<ans<<endl;
}

int main ()
{
    speed;
    solve();
    return 0;
}