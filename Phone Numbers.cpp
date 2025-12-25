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
string s;
vector<ll>vv;
// bool check (ll pos){
//     string temp=s;
//     auto it=upper_bound(vv.begin(),vv.end(),(ll)s[pos]);
//     if (it==vv.end())return false;
//     else{
//         temp[pos]=(char)*it;
//         return temp>s;
//     }
// }
void solve ()
{
    ll n,k;cin>>n>>k;
    cin>>s;
    string temp=s;
    sort(temp.begin(),temp.end());
    string ans="";
    if (k>n){
        for (int i=0;i<k-n;i++){
            s+=temp[0];
        }
        cout<<s<<endl;return;
    }else{
        vv.resize(n);
        for (int i=0;i<n;i++){
            vv[i]=(ll)s[i];
        }
        sort(vv.begin(),vv.end());
        ll j=0;
        for (int i=k-1;i>=0;i--){
            auto it=upper_bound(vv.begin(),vv.end(),(ll)s[i]);
            if (it!=vv.end()){
                s[i]=(char)*it;
                j=i;
                break;
            }
        }
        ll cnt=k;
        for (int i=0;i<=j;i++){
            cout<<s[i];
            cnt--;
        }
        while (cnt--){
            cout<<temp[0];
        }
        cout<<endl;
    //     ll l=0,r=k-1;
    //     vv.resize(n);
    //     for (int i=0;i<n;i++){
    //         vv[i]=(ll)s[i];
    //     }
    //     sort(vv.begin(),vv.end());
    //     ll ans=0;
    //     while (l<=r){
    //         ll mid=(l+r)/2;
    //         if (check(mid)){
    //             ans=mid;
    //             l=mid+1;
    //         }else r=mid-1;
    //     }
    //     auto it=upper_bound(vv.begin(),vv.end(),(ll)s[ans]);
    //     s[ans]=(char)*it;
    //     string Final="";
    //     for(int i=0;i<=ans;i++){
    //         Final+=s[i];
    //     }
    //     for (int i=0;i<k-1-ans;i++){
    //         Final+=temp[0];
    //     }
    //     cout << Final <<endl;
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