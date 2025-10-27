//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
const ll N=1e5+1;     
void solve ()
{
    ll n,m,k;cin>>n>>m>>k;
    vector<ll>vv(n+1,0),v(n+1,0);
    for (int i=1;i<=n;i++)cin>>v[i];
    vector<pair<ll,pair<ll,ll>>>op(m+1);
    for (int i=1;i<=m;i++){
        cin>>op[i].first>>op[i].second.first>>op[i].second.second;
    }
    // for (int i=1;i<=m;i++){
    //     cout<<op[i].first<<sp<<op[i].second.first<<sp<<op[i].second.second<<endl;
    // }
     vector<ll>hash(m+2,0);
     while(k--){
        ll l,r;cin>>l>>r;
        hash[l]++;
        if(r+1<=m)hash[r+1]--;
    }
    for(int i=1;i<=m;i++)hash[i]+=hash[i-1];
    // for (int i=1;i<=N;i++){
    //     if (hash[i]!=0){
    //         cout<<i<<sp<<hash[i]<<endl;
    //     }
    // }
    // vector<ll>vv(n+1,0);
   for (int i=1;i<=m;i++){
        vv[op[i].first]+=hash[i]*op[i].second.second;
        ll temp=op[i].second.first+1;
        if (temp<=n){
            vv[temp]-=hash[i]*op[i].second.second;
        }
   }
//    for (int i=1;i<=n;i++){
//     cout<<vv[i]<<sp;
//    }
//    cout<<endl;
//    vector<ll>ans(n+1,0);
   for (int i=2;i<=n;i++){
    vv[i]+=vv[i-1];
   }
   for (int i=1;i<=n;i++){
    cout<<vv[i]+v[i]<<sp;
   }
   cout<<endl;
}
int main ()
{
    speed;
    // int tt;
    // cin>>tt;
    // while (tt--)
    // {
        solve ();
    // }
    return 0;
}