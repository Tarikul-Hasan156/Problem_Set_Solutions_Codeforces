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
    int a[n+2],pre[n+2];
    for (int i=0;i<=n+1;i++)pre[i]=0;
    for (int i=1;i<=n;i++){
        cin>>a[i];
        pre[i]=pre[i-1]^a[i];
    }
    // for (int i=1;i<=n;i++){
    //     cout<<pre[i]<<sp;
    // }
    // cout<<endl;
    int tot=pre[n];
    // cout<<tot<<endl;
    for (int i=1;i<=n;i++){
        int left=pre[i];
        int right=tot^pre[i];
        if (left==right){
            cout<<"YES"<<endl;return;
        }
    }
    for (int i=1;i<=n;i++){
        int left=pre[i];
        for (int j=i+1;j<=n;j++){
            int right=tot^pre[j];
            int middle=right^tot^left;
            if (left==right and right==middle){
                cout<<"YES"<<endl;return;
            }
        }
    }
    cout<<"NO"<<endl;
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