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
    map<string,string>mp;
    for (int i=0;i<x;i++){
        string key,val;cin>>key>>val;
        mp[key]=val;
    }
    for (auto [key,val]:mp){
        auto it=mp.find(val);
        if (it!=mp.end()){
            while (it!=mp.end()){
                string temp_val=it->second;
                string temp_key=it->first;
                mp[key]=temp_val;
                mp.erase(temp_key);
                it=mp.find(temp_val);
            }
        }
        // if (it!=mp.end()){
        //     mp[key]=it->second;
        //     mp.erase(val);
        // }
    }
    cout<<mp.size()<<endl;
    for (auto [key,val]:mp){
        cout<<key<<sp<<val<<endl;
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