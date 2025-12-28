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
ll n,m;
vector<ll>q(N);
vector<pair<ll,ll>>pr(N);
bool check (ll index){
    vector<ll>temp(n+1);
    for (int i=1;i<=index;i++){
        temp[q[i]]=1;
    }
    for (int i=1;i<=n;i++){
        temp[i]+=temp[i-1];
    }
    ll cnt=0;
    for (int i=1;i<=m;i++){
        ll right=temp[pr[i].second];
        ll left=temp[pr[i].first-1];
        ll total_one=right-left;
        if (total_one>(pr[i].second-pr[i].first+1-total_one))cnt++;
    }
    return cnt>=1;
}
void solve ()
{
    cin>>n>>m;
    for (int i=1;i<=m;i++){
        cin>>pr[i].first>>pr[i].second;
    }
    ll temp;cin>>temp;
    for (int i=1;i<=temp;i++)cin>>q[i];
    ll l=1,r=temp;
    ll ans=-1;
    while (l<=r){
        ll mid=(l+r)/2;
        if (check(mid)){
            ans=mid;
            r=mid-1;
        }else l=mid+1;
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
    }
    return 0;
}