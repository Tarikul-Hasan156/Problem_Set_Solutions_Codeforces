//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp ' '
#define endl '\n'
using namespace std;
const int N=1e5+9;

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
int mask[N];
void solve ()
{
    int n;cin>>n;
    for (int i=1;i<=n;i++){
        string s;cin>>s;
        vector<int>freq(26,0);
        for (auto c:s){
            freq[c-'a']++;
        }
        for (int k=0;k<26;k++){
            if (freq[k]%2==1){
                mask[i]+=(1<<k);
            }
        }
    }
    ll ans=0;
    map<int,int>mp;
    for (int i=1;i<=n;i++){
        ans+=mp[mask[i]];
        for (int k=0;k<26;k++){
            ans+=mp[(1<<k)^mask[i]];
        }
        mp[mask[i]]++;
    }
    cout<<ans<<endl;
}

int main ()
{
    speed;
    solve();
    return 0;
}