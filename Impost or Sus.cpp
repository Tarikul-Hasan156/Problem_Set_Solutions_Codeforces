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
    string s;cin>>s;
    ll x=s.size();
    ll cnt=0;
    if (s[0]=='u'){
        cnt++;
        s[0]='s';
    }
    if (s[x-1]=='u'){
        cnt++;
        s[x-1]='s';
    }
    vector<ll>vv;
    for (int i=1;i<x-1;i++){
        if (s[i]=='u'){
            if (s[i-1]=='u'){
                cnt++;
                s[i-1]='s';
            }
            if (s[i+1]=='u'){
                cnt++;
                s[i+1]='s';
            }
        }
    }
    // for (int i=1;i<x-1;i++){
    //     if (s[i]=='u')vv.push_back(i);
    // }
    // for (int i=0;i<vv.size();i++){
    //     if (s[vv[i]-1]=='u'){
    //         cnt++;
    //         s[vv[i]-1]='s';
    //     }
    //     if (s[vv[i]+1]=='u'){
    //         cnt++;
    //         s[vv[i]+1]='s';
    //     }
    // }
    cout<<cnt<<endl;
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