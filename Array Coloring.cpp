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
    vector<pair<int,char>>pr;
    for (int i=1;i<=n;i++){
        int temp;cin>>temp;
        if (i&1)
        pr.push_back({temp,'r'});
        else pr.push_back({temp,'b'});
    }
    sort(pr.begin(),pr.end());
    for (int i=0;i<n-1;i++){
        // auto [val,check1]=pr[i];
        // auto [val,check2]=pr[i+1];
        if (pr[i].second==pr[i+1].second){
            cout<<"NO"<<endl;return;
        }
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