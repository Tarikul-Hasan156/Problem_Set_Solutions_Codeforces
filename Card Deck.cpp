//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp ' '
#define endl '\n'
using namespace std;

struct custom_hash {
  static uint64_t splitmix64(uint64_t x) {
      x += 0x9e3779b97f4a7c15ULL;
      x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9ULL;
      x = (x ^ (x >> 27)) * 0x94d049bb133111ebULL;
      return x ^ (x >> 31);
  }

  size_t operator()(uint64_t x) const {
      static const uint64_t FIXED_RANDOM =
          chrono::steady_clock::now().time_since_epoch().count();
      return splitmix64(x + FIXED_RANDOM);
  }
};

void solve ()
{
    ll x;cin>>x;
    unordered_map<ll,ll,custom_hash>mp;
    vector<ll>vv(x);
    for (int i=0;i<x;i++){
        cin>>vv[i];
        // mp[vv[i]]=i;
    }
    reverse(vv.begin(),vv.end());
    for (int i=0;i<x;i++){
        mp[vv[i]]=i;
    }
    // for (auto &x:vv)cout<<x<<sp;cout<<endl;
    auto it =max_element(vv.begin(),vv.end());
    ll mx_element=*it;
    ll mx_index=it-vv.begin();
    vector<ll>track;
    track.push_back(mx_index);
    ll val=x;
    while (--val){
        ll index=mp[val];
        if (index>track.back()){
            // cout<<val<<sp<<index<<sp<<track.back()<<endl;
            track.push_back(index);
        }
    }
    // for (auto &x:track)cout<<x<<sp;cout<<endl;
    vector<ll>res;
    for (int i=0;i<track.size();i++){
        if (i==0){
            for (int j=track[i];j>=0;j--){
                res.push_back(vv[j]);
            }
        }else{
            for (int j=track[i];j>track[i-1];j--){
                res.push_back(vv[j]);
            }
        }
    }
    for (auto &x:res)cout<<x<<sp;cout<<endl;
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