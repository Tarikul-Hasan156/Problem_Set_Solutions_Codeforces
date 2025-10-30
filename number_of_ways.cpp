//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
// ll s,e;
// ll cnt=0;
//  vector<ll>vv(16);
//  vector<bool>check(16,false);
// void ways(ll pos,ll x){
//     if (pos>x){
//         vector<ll>temp;
//         for (int i=1;i<=x;i++){
//             if (check[i])temp.push_back(vv[i]);
//         }
//         ll size=temp.size();
//         if (!temp.empty())
//        if ((temp[0]==s and temp[size-1]==e) and (size==2  or size==3 or size==4))cnt++;
//        return;
//     }
//     check[pos]=false;
//     ways(pos+1,x);
//     check[pos]=true;
//     ways(pos+1,x);
//  }
ll cnt=0;
void  ways(ll s,ll e){
    if(s>e){
       
        
         return;
    }
    if (s==e)cnt++;
    
    ways(s+1,e);
    ways(s+2,e);
    ways(s+3,e);
}
void solve ()
{
    ll s,e;cin>>s>>e;
    ways(s,e);
    cout<<cnt<<endl;
    // cin>>s>>e;
    // for (int i=s,j=1;i<=e;i++,j++){
    //     vv[j]=i;
    // }
    // ways(1,e-s+1);
    // cout<<cnt<<endl;

   
    // ll cnt=0;
    // vector<ll>vv;
    // for (int i=s;i<=e;i++)vv.push_back(i);
    // if (e==s){
    //     cout<<1<<endl;return;
    // }
    // ll x=vv.size();
    // for (int mask=0;mask<=(1<<x);mask++){
    //     vector<ll>temp;
    //     for (int i=0;i<x;i++){
    //         if ((mask>>i)&1){
    //             temp.push_back(vv[i]);
    //         }
    //     }
    //     ll size=temp.size();
    //     sort(temp.begin(),temp.end());
    //     if (!temp.empty()){
    //         if((temp[0]==s and temp[size-1]==e) and (size==2 or size==3 or size==4)){
    //             cnt++;
    //             // for (auto &x:temp)cout<<x<<sp;cout<<endl;
    //         }
    //     }
    // }
    // cout<<cnt<<endl;
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