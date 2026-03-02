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
    if (n%4==0){
        int ans=2;
        for (int i=0;i<n;i++){
            cout<<ans++<<sp;
        }
        cout<<endl;
    }else if (n%4==1){
        int ans=2;
        for (int i=1;i<n;i++){
            cout<<ans++<<sp;
        }cout<<0<<sp<<endl;
    }else if (n%4==3){
        cout<<2<<sp<<1<<sp<<3<<sp;
        // n-=3;
        int ans=4;
        for (int i=3;i<n;i++){
            cout<<ans++<<sp;
        }cout<<endl;
    }else{
        cout<<4<<sp<<1<<sp<<2<<sp<<12<<sp<<3<<sp<<8<<sp;
        // n-=6;
        int ans=14;
        for (int i=6;i<n;i++){
            cout<<ans++<<sp;
        }cout<<endl;
    }
}

int main ()
{
    speed;
    int tt;cin>>tt;
    while (tt--){
      solve();
    }
    return 0;
}