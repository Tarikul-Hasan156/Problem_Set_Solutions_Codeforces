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

//   size_t operator()(uint64_t x) const {
//       static const uint64_t FIXED_RANDOM =
//           chrono::steady_clock::now().time_since_epoch().count();
//       return splitmix64(x + FIXED_RANDOM);
//   }
// };

void solve ()
{
    int n,l,r;cin>>n>>l>>r;
    // vector<pair<int,int>>pr;
    map<int,int>mpp;
    multiset<int>mp;
    for (int i=2;i<=n;i++){
        int temp=l;
        while (temp<=r){
            int mod=temp%i;
            if (mod==0 and mp.find(__gcd(temp,i))==mp.end()){
                mp.insert(__gcd(temp,i));
                // pr.push_back({i,temp});
                mpp[i]=temp;
                break;
            }else{
                if (mod>0){
                    temp+=i-mod;
                }else{
                    temp+=i;
                }
            }
        }
    }
    mpp[1]=l;
    // for (int i=l;i<=r;i++){
    //     auto it=mp.find(__gcd());
    //     if (it==mp.end()){
    //         mpp[1]=i;
    //         break;
    //     }
    // }
    if (mpp.size()>=n){
        cout<<"YES"<<endl;
        for (auto [index,val]:mpp){
            cout<<val<<sp;
        }
        cout<<endl;
    }else {
        cout<<"NO"<<endl;
        // for (auto [index,val]:mpp){
        //     cout<<index<<sp<<val<<endl;
        // }
    }
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