//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e5+9;

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
    int n;cin>>n;
    string s1, s2;cin>>s1>>s2;
    // vector<array<int,3>>v;
    map<int,pair<int,int>>mp;
    int cnt_one=0,cnt_zero=0;
    for (int i=0;i<s1.size();i++){
        if (s1[i]=='1'){
            cnt_one++;
        }else cnt_zero++;
        mp[i]=make_pair(cnt_one,cnt_zero);
    }
    int cnt=0;
    for (int i=n-1;i>=0;i--){
        int track=s1[i]-'0';
            if (cnt&1){
                if (track==1){
                    track=0;
                }else track=1;
            }
            if (track==s2[i]-'0')continue;
            auto [one,zero]=mp[i];
            if (one!=zero){
                cout<<"NO"<<endl;return;
            }else cnt++;
    }
    cout<<"YES"<<endl;
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