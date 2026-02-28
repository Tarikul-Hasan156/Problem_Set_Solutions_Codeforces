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
    vector<int>a(n+1);
    for (int i=1;i<=n;i++)cin>>a[i];
    int mx=*max_element(a.begin(),a.end());
    int mn=*min_element(a.begin()+1,a.end());
    vector<int>cnt_one(11),cnt_zero(11);
    for (int i=1;i<=n;i++){
        for (int j=0;j<11;j++){
            if (a[i]>>j&1){
                cnt_one[j]++;
            }else cnt_zero[j]++;
        }
    }
    int ans_max=0,ans_min=mn;
    for (int i=0;i<11;i++){
        if (mx>>i&1){
            ans_max+=(1<<i);
        }else{
            if (cnt_one[i]>0){
                ans_max+=(1<<i);
            }
        }
        if (mn>>i&1){
            if (cnt_zero[i]>0){
                ans_min-=(1<<i);
            }
        }
    }
    cout<<ans_max-ans_min<<endl;
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