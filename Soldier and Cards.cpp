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

void solve ()
{
    ll n;cin>>n;
    ll x;cin>>x;
    deque<ll>dq1;
    for(int i=0;i<x;i++){
        ll val;cin>>val;
        dq1.push_back(val);
    }
    ll y;cin>>y;
    deque<ll>dq2;
    for (int i=0;i<y;i++){
        ll val;cin>>val;
        dq2.push_back(val);
    }
    // for (auto &x:dq1)cout<<x<<sp;cout<<endl;
    // cout<<endl;
    // for (auto &x:dq2)cout<<x<<sp;cout<<endl;
    ll ans=0;
    while (1){
        if (dq1.empty()){
            cout<<ans<<sp<<2<<endl;return;
        }
        if (dq2.empty()){
            cout<<ans<<sp<<1<<endl;return;
        }
        if (ans==1e3){
            cout<<-1<<endl;return;
        }
        ll val1=dq1.front();
        ll val2=dq2.front();
        if (val1>val2){
            dq1.pop_front();
            dq1.push_back(val2);
            dq1.push_back(val1);
            dq2.pop_front();
        }else{
            dq2.pop_front();
            dq2.push_back(val1);
            dq2.push_back(val2);
            dq1.pop_front();
        }
        ans++;
    }
}

int main ()
{
    speed;
    // int tt;
    // cin >> tt;
    // while (tt--)
    // {
        solve();
    // }
    return 0;
}