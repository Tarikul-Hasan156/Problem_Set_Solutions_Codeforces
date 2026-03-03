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
int check (int l, int r){
    if (l==r)return -1;
    cout<<"?"<<sp<<l<<sp<<r<<endl;
    int temp;cin>>temp;
    return temp;
}
void solve ()
{
    int n;cin>>n;
    int l=1, r=n+1;
    while (l+1<r){
        int index=check(l,r-1);
        int mid=l+(r-l)/2;
        if (index<mid){
            int temp1=check(l,mid-1);
            if (index==temp1){
                r=mid;
            }else{
                l=mid;
            }
        }else{
            int temp2=check(mid,r-1);
            if (temp2==index){
                l=mid;
            }else{
                r=mid;
            }
        }
    }
    cout<<"!"<<sp<<l<<endl;
}

int main ()
{
    speed;
    solve();
    return 0;
}
