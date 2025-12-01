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
const ll N=1e5+9;
vector<ll>a(N),b(N);
ll n,k;
bool check (ll x){
    ll cnt=0;
    for (int i=1;i<=n;i++){
        ll temp=0;
        ll val=x-a[i];
        if (val<0)continue;
        ll l=1,r=n;
        while (l<=r){
            ll mid=(l+r)/2;
            if (b[mid]<=val){
                temp=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        cnt+=temp;
    }
    // cout<<cnt<<endl;
    return cnt>=k;
}
void solve ()
{
    cin>>n>>k;
    for (int i=1;i<=n;i++)cin>>a[i];
    for (int i=1;i<=n;i++)cin>>b[i];
    sort(a.begin()+1,a.begin()+1+n);
    sort(b.begin()+1,b.begin()+1+n);
    ll l=0,r=2e9;
    ll ans=0;
    while (l<=r){
        ll mid=(l+r)/2;
        if (check(mid)){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout <<ans<<endl;
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