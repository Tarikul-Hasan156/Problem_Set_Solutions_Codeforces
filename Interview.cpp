//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp ' '
// #define endl '\n'
using namespace std;
const ll N=2e5+9;

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
vector<int>pre(N),a(N);
int ask(int l, int r){
    cout<<"?"<<sp<<r-l+1<<sp;
    for (int i=l;i<=r;i++){
        cout<<i<<sp;
    }
    cout<<endl;
    int temp;cin>>temp;
    return temp;
}
bool check (int my, int director){
    if (my==director){
        return true;
    }else return false;
}
void solve ()
{
    int n;cin>>n;
    for (int i=1;i<=n;i++)cin>>a[i];
    for (int i=1;i<=n;i++){
        pre[i]=pre[i-1]+a[i];
    }
    int l=1,r=n;
    while (l<=r){
        int mid=(l+r)/2;
        // int val=ask(l,r);
        // if (check(pre[r]-pre[l-1],val)){
        //     l=mid+1;
        // }else{
        if (l==r){
            cout<<"!"<<sp<<l<<endl;return;
        }
            int val=ask(l,mid);
            if (check(pre[mid]-pre[l-1],val)){
                l=mid+1;
            }else{
                r=mid;
            }
        // }
    }
    cout<<"!"<<sp<<l<<endl;
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
