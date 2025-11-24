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
    // queue<pair<ll,ll>>positive,negative;
    vector<pair<ll,ll>>positive,negative;
    for (int i=0;i<x;i++){
        ll temp1,temp2;cin>>temp1>>temp2;
        if (temp1<0){
            negative.push_back({abs(temp1),temp2});
        }else{
            positive.push_back({temp1,temp2});
        }
    }
    sort(positive.begin(),positive.end(),[](const pair<ll,ll>&a,const pair<ll,ll>&b){
        if (a.first==b.first)return a.second>b.second;
         return a.first<b.first;
    });
    sort(negative.begin(),negative.end(),[](const pair<ll,ll>&a,const pair<ll,ll>&b){
        if (a.first==b.first)return a.second>b.second;
         return a.first<b.first;
    });
    // for (auto [val1,val2]:positive){
    //     cout<<val1<<sp<<val2<<endl;
    // }
    // cout<<endl;
    // for (auto [val1,val2]:negative){
    //     cout<<val1<<sp<<val2<<endl;
    // }
    ll ans=0;
    ll size1=positive.size();
    ll size2=negative.size();
    if (size1<size2)goto level1;
    else  if (size2<size1) goto level2;
    else goto level4;
    level1:
    for (int i=0;i<size1;i++){
        ans+=positive[i].second+negative[i].second;
    }
      ans+= negative[size1].second;goto level3;
    level2:
    for (int i=0;i<size2;i++){
        ans+=negative[i].second+positive[i].second;
    }
    ans+=positive[size2].second;
    goto level3;
    level4:
    for (int i=0;i<size1;i++){
        ans+=positive[i].second+negative[i].second;
    }
    goto level3;
    level3:
    cout<<ans<<endl;
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