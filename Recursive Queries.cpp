//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp ' '
#define endl '\n'
using namespace std;

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
const ll N=1e6+9;
vector<vector<ll>>pre(10);
int check (ll val){
    while (val>=10){
        string temp=to_string(val);
        ll mul=1;
        for (int i=0;i<temp.size();i++){
            if (temp[i]!='0'){
                mul*=temp[i]-'0';
            }
        }
        val=mul;
    }
    return val;
}
void solve ()
{
    ll l,r,k;cin>>l>>r>>k;
    auto &vv=pre[k];
    cout<<upper_bound(vv.begin(),vv.end(),r)-lower_bound(vv.begin(),vv.end(),l)<<endl;
}

int main ()
{
    speed;
    for (int i=1;i<=1e6;i++){
        pre[check(i)].push_back(i);
    }
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}