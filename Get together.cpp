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
vector<pair<ll,ll>>pr;
 ll x;
bool check (double val){
    vector<double>left,right;
    double mn=(double)LLONG_MAX,mx=(double)LLONG_MIN;
    for (auto [position,valocity]:pr){
        double temp=valocity*val;
        right.push_back(position+temp);
        left.push_back(position-temp);
        mn=min(mn,right.back());
        mx=max(mx,left.back());
    }
    // double mn=*min_element(right.begin(),right.end());
    // double mx=*max_element(left.begin(),left.end());
    return mn>=mx;
}
void solve ()
{
    cin>>x;
    pr.resize(x);
    for (int i=0;i<x;i++){
        cin>>pr[i].first>>pr[i].second;
    }
    double ans=0;
    double l=0,r=1e9;
    ll it=100;
    while (it--){
        double mid=(r+l)/2.0;
        if (check(mid)){
            r=mid;
            ans=mid;
        }else{
            l=mid;
        }
    }
    cout<<fixed<<setprecision(10)<<ans<<endl;
    
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