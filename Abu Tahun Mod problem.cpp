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
int n;
vector<int>a;
void solve ()
{
    cin>>n;
    a.resize(n+1);
    for (int i=1;i<=n;i++)cin>>a[i];
    int l=1,r=n;
    bool flag=true;
    while (l<=r){
        if (a[l]==a[r] and flag){
            l++,r--;
        }else{
            flag=false;break;
        }
    }
    if (flag){
        cout<<-1<<endl;return;
    }
    int ans=0;
    int target=n/2;
    for (int i=1;i<=target;i++){
        ans=__gcd(ans,abs(a[i]-a[n-i+1]));
    }
    cout<<ans<<endl;
}

int main ()
{
    speed;
    solve();
    return 0;
}