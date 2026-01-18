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
    set<int>se;
    for (int i=1;i<=n;i++){
        int temp;cin>>temp;
        se.insert(temp);
    }
    vector<int>vv(se.begin(),se.end());
    ll cnt=0,mx=LLONG_MIN;
    if (vv.size()==1){
        cout<<1<<endl;return;
    }
    for (int i=0;i<(int)vv.size()-1;i++){
        if (vv[i]+1==vv[i+1]){
            cnt++;
        }else {
            cnt++;
            mx=max(mx,cnt);
            cnt=0;
        }
    }
    if (cnt>0){
        cnt++;
        mx=max(cnt,mx);
    }
    cout<<mx<<endl;
    // bool flag=false;
    // for (int i=1;i<=n;i++){
    //     int temp;cin>>temp;
    //     se.insert(temp);
    //     if (temp<0)flag=true;
    // }
    // int mn=*se.begin();
    // int k=0,target=0;
    // while (1){
    //     auto it=se.find(k);
    //     if (it==se.end()){
    //         target=k;
    //         break;
    //     }else k++;
    // }
    // int ans1=0,ans2=0,ans3=0,ans4=0;
    // if (target<mn){
    //     vector<int>vv(se.begin(),se.end());
    //     for (int i=0;i<(int)vv.size();i++){
    //         vv[i]-=mn;
    //     }
    //     set<int>temp(vv.begin(),vv.end());
    //     k=0;
    //     while (1){
    //         auto it=temp.find(k);
    //         if (it==temp.end()){
    //             ans1=k;break;
    //         }else k++;
    //     }
    // }
    // if (flag){
    //     vector<int>vv(se.begin(),se.end());
    //     for (int i=0;i<(int)vv.size();i++){
    //         vv[i]+=abs(mn);
    //     }
    //     set<int>temp(vv.begin(),vv.end());
    //     k=0;
    //     while (1){
    //         auto it=temp.find(k);
    //         if (it==temp.end()){
    //             ans2=k;break;
    //         }else k++;
    //     }
    // }
    // k=0;
    // ll need=0;
    // while (1){
    //     auto it=se.find(k);
    //     if (it==se.end()){
    //         auto it2=se.upper_bound(k);
    //         if (it2==se.end()){
    //             ans3=*prev(se.end())+1;break;
    //         }else{
    //             need=*it2;break;
    //         }
    //     }else k++;
    // }

    // vector<ll>last(se.begin(),se.end());
    // for (int i=0;i<(int)last.size();i++){
    //     last[i]-=need;
    // }
    // k=0;
    // se.clear();
    // se.insert(last.begin(),last.end());
    // while (1){
    //     auto it=se.find(k);
    //     if (it==se.end()){
    //         ans4=k;break;
    //     }else k++;
    // }
    // // cout<<target<<sp<<ans1<<sp<<ans2<<endl;
    // cout<<max(max(ans1,target),max(max(ans2,ans3),ans4))<<endl;
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