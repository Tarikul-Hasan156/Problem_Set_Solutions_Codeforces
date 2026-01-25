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
ll n;
ll a[N],b[N],pre[N];
ll have;
ll ans;
multiset<ll>mse;
ll check2 (ll val){
    return b[val];
}
bool check (ll val,ll diff){
    ll l=1,r=n;
    ll level=-1;
    while (l<=r){
        ll mid=(l+r)/2;
        if (check2(mid)<=val){
            l=mid+1;
            level=mid;
        }else r=mid-1;
    }
    if (1LL*diff*level>ans){
        ans=1LL*diff*level;return true;
    }
    return false;
}
void solve ()
{
    cin>>n;
    for (int i=1;i<=n;i++){
        int temp;cin>>temp;mse.insert(temp);a[i]=temp;
    }
    sort(a,a+n+1);
    for (int i=1;i<=n;i++)cin>>b[i];
    for (int i=1;i<=n;i++){
        b[i]=b[i-1]+b[i];
    }
    // int l=*mse.begin(),r=*prev(mse.end());
    // while (l<=r){
    //     ll mid=(l+r)/2;
        // auto it=mse.lower_bound(mid);
        // have=distance(it,mse.end());
        // if (it==mse.end()){
        //     r=mid-1;
        // }else{
        //     if (check(have,*it)){
        //         cout<<*it<<endl;
        //         l=mid+1;
        //     }else r=mid-1;
        // }
        
    // }
    for (int i=1;i<=n;i++){
        have=n-i+1;
        check(have,a[i]);
    }
    cout<<ans<<endl;
}

int main ()
{
    speed;
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
        mse.clear();
        have=0,ans=0;
    }
    return 0;
}