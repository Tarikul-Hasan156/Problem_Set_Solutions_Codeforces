//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
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
const int mod=5;
void solve ()
{
    string s;cin>>s;
    int ans=1;
    int val=0;
    int sz=s.size();
    if (s.size()>1){
        val=val*10+(s[sz-2]-'0');
    }
    val=val*10+(s[sz-1]-'0');
    int two[4],three[4],four[3];
    two[0]=1,two[1]=2,two[2]=4,two[3]=3;
    three[0]=1,three[1]=3,three[2]=4,three[3]=2;
    four[0]=1,four[1]=4;
    ans+=two[val%4];
    ans+=three[val%4];
    ans+=four[val%2];
    cout<<ans%mod<<endl;
}

int main ()
{
    speed;
    solve();
    return 0;
}