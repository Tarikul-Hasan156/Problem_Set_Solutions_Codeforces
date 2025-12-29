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
vector<pair<ll,pair<ll,ll>>>pr(N);
vector<ll>vv(N),v(N),temp(N);
void solve ()
{
    ll n,m,k;cin>>n>>m>>k;
    for (int i=1;i<=n;i++)cin>>v[i];
    for (int i=1;i<=n;i++){
        vv[i]=v[i]-v[i-1];
    }
    for (int i=1;i<=m;i++){
        cin>>pr[i].first>>pr[i].second.first>>pr[i].second.second;
    }
    while (k--){
        ll l,r;cin>>l>>r;
        temp[l]++;
        temp[r+1]--;
    }
    for (int i=1;i<=m;i++){
        temp[i]+=temp[i-1];
    }
    for (int i=1;i<=m;i++){
        vv[pr[i].first]+=pr[i].second.second*temp[i];
        vv[pr[i].second.first+1]-=pr[i].second.second*temp[i];
    }
    for (int i=1;i<=n;i++){
        vv[i]+=vv[i-1];
    }
    for (int i=1;i<=n;i++)cout<<vv[i]<<sp;
    cout<<endl;
}

int main ()
{
    speed;
    solve();
    return 0;
}