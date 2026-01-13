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

vector<int>out(N),in(N);
void solve ()
{
    int n;cin>>n;
    for (int i=1;i<=n;i++){
        cin>>in[i];
    }
    for (int i=1;i<=n;i++)cin>>out[i];
    int l=1,r=1;
    int ans=0;
    multiset<int>mp;
    while (l<=n and r<=n){
        auto it=mp.find(in[l]);
        if (it!=mp.end()){
            l++;continue;
        }
        if (in[l]==out[r]){
            l++;r++;
        }else{
            mp.insert(out[r]);r++;
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main ()
{
    speed;
    solve();
    return 0;
}