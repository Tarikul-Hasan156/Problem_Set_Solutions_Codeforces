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
    int a[n];
    for (int i=0;i<n;i++)cin>>a[i];
    int ans=0;
    for (int i=0;i<n;i++){
        ans^=a[i];
    }
    if (n%2!=0){
        cout<<((ans^n)<(1<<8)?(ans^n):-1)<<endl;
    }else{
        cout<<((ans<(1<<8))?ans:-1)<<endl;
    }
    // int a[n],b[n];
    // for (int i=0;i<n;i++)cin>>a[i];
    // for (int i=0;i<(1<<8);i++){
    //     for (int j=0;j<n;j++)b[j]=a[j];
    //     for (int j=0;j<n;j++){
    //         b[j]^=i;
    //     }
    //     int ans=b[0];
    //     for (int j=1;j<n;j++){
    //         ans^=b[j];
    //     }
    //     if (ans==0){
    //         cout<<i<<endl;return;
    //     }
    // }
    // cout<<-1<<endl;
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