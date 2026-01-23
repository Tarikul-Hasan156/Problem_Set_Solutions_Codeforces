//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp ' '
// #define endl '\n'
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
bool check (int val){
    cout<<val<<endl;
    string temp;cin>>temp;
    return temp=="yes";
}
bool is_prime (int val){
    if (val==2)return true;
    if (val%2==0)return false;
    for (int i=2;i*i<=val;i++){
        if(val%i==0)return false;
    }
    return true;
}
void solve ()
{
    int ans=0;
    if (check(2*2) or check (3*3) or check (5*5) or check(7*7)){
        cout<<"composite"<<endl;return;
    }
    for (int i=2;i<=47;i++){
        if (is_prime(i)){
            if (check(i))ans++;
        }
   }
   if (ans>=2)cout<<"composite"<<endl;
   else cout<<"prime"<<endl;
}

int main ()
{
    // speed;
    solve();
    return 0;
}