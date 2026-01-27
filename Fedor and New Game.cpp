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
    int n,m,k;cin>>n>>m>>k;
    vector<int>vv(m+2);
    for (int i=1;i<=m+1;i++){
        cin>>vv[i];
    }
    int ans=0;
    for (int i=1;i<=m;i++){
        int cnt=0;
        for (int j=0;j<20;j++){
            int m_bit=0;
            int val_bit=0;
            if (vv[i]>>j&1)m_bit=1;
            if (vv[m+1]>>j&1)val_bit=1;
            if (val_bit!=m_bit)cnt++;
        }
        if (cnt<=k)ans++;
    }
    cout<<ans<<endl;
}

int main ()
{
    speed;
    solve();
    return 0;
}