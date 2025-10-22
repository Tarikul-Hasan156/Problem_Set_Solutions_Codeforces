//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll x;cin>>x;
    vector<ll>vv(x);
    vector<ll>all_index;
    for (auto &x:vv)cin>>x;
    ll mx=LLONG_MIN;
    for (int i=0;i<x-1;i++){
        ll temp=vv[i]*vv[i+1];
        mx=max(mx,temp);
    }
    cout<<mx<<endl;
    // auto it=max_element(vv.begin(),vv.end());
    // ll mx=*it;
    // for (int i=0;i<x;i++){ 
    //     if (vv[i]==mx)all_index.push_back(i);
    // }
    // ll ans=LLONG_MIN,temp=0;
    // for (int i=0;i<all_index.size();i++){
    //     if (all_index[i]==0){
    //         temp=vv[all_index[i]]*vv[all_index[i]+1];
    //         ans=max(ans,temp);
    //     }else if (all_index[i]==x-1){
    //         temp=vv[all_index[i]]*vv[all_index[i]-1];
    //         ans=max(ans,temp);
    //     }else{
    //         temp=max(vv[all_index[i]]*vv[all_index[i]-1],vv[all_index[i]]*vv[all_index[i]+1]);
    //         ans=max(ans,temp);
    //     }
    // }
    // cout<<temp<<endl;
    // ll mx_index=it-vv.begin();
    // if (mx_index==x-1)cout<<mx*(vv[mx_index-1])<<endl;
    // else if (mx_index==0)cout<<mx*(vv[mx_index+1])<<endl;
    // else{
    //     cout<<mx*(max(vv[mx_index-1],vv[mx_index+1]))<<endl;    
    // }
}
int main ()
{
    speed;
    int tt;
    cin>>tt;
    while (tt--)
    {
        solve ();
    }
    return 0;
}