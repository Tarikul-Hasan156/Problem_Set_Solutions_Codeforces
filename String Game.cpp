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
string s=" ",target;
vector<ll>vv;
bool check (ll val){
    string temp="";
    vector<pair<char,bool>>pr;
    pr.push_back({'0',false});
    for (int i=1;i<s.size();i++){
        pr.push_back({s[i],true});
    }
    for (int i=1;i<=val;i++){
        pr[vv[i]].second=false;
    }
    for (int i=1;i<pr.size();i++){
        if (pr[i].second){
            temp+=pr[i].first;
        }
    }
    ll j=0;
    for (int i=0;i<temp.size();i++){
        if (temp[i]==target[j]){
            j++;
            if (j==target.size())return true;
        }
    }
    return false;
}
void solve ()
{
    string temp;cin>>temp>>target;
    s+=temp;
    vv.resize(s.size()+1);
    for (int i=1;i<vv.size();i++)cin>>vv[i];
    ll l=1,r=s.size()-1;
    ll ans=0;
    while (l<=r){
        ll mid=(l+r)/2;
        if (check(mid)){
            l=mid+1;
            ans=mid;
        }else r=mid-1;
    }
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