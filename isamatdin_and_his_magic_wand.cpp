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
    for (auto &x:vv)cin>>x;
    vector<ll>even,odd,res;
    for (int i=0;i<x;i++){
        if (vv[i]&1)even.push_back(vv[i]);
        else odd.push_back(vv[i]);
    }
    if (odd.size()==0 or even.size()==0){
        for (auto &x:vv)cout<<x<<sp;cout<<endl;
        return; 
    }
    sort(vv.begin(),vv.end());
    for (auto &x:vv)cout<<x<<sp;cout<<endl;
    // sort(even.begin(),even.end());
    // sort(odd.begin(),odd.end());
    // ll ev=0;
    // ll od=0;
    // for(int i=0;i<x;i++){
    //     if (vv[i]&1){
    //         if (even[ev]<vv[i] and ev<even.size()){
    //             res.push_back(even[ev]);
    //             ev++;
    //         }else{
    //             res.push_back(vv[i]);
    //         }
    //     }else{
    //         if (odd[od]<vv[i] and od<odd.size()){
    //             res.push_back(odd[od]);
    //             od++;
    //         }else{
    //             res.push_back(vv[i]);
    //         }
    //     }
    // }
    // for (auto &x:res)cout<<x<<sp;cout<<endl;
    // vector<pair<ll,pair<ll,bool>>>temp;
    // ll odd=0,even=0;
    // for (int i=0;i<x;i++){
    //     cin>>vv[i];
    //     if (vv[i]&1)odd++;
    //     else even++;
    //     temp.push_back({vv[i],i,true});
    // }
    // sort(temp.begin(),temp.end());

    // for (int i=0;i<x;i++){
    //     cout<<temp[i].first<<sp<<temp[i].second<<endl;
    // }
    // if (odd==0 or even==0){
    //     for (auto &x:vv)cout<<x<<sp;cout<<endl;
    //     return;
    // }
    // for (int i=0;i<x;i++){
    //     if (temp[i].first<vv[i]){
    //         ll tmp=vv[i];
    //         vv[i]=temp[i].first;
            
    //     }
    // }
    // for (auto &x:vv)cout<<x<<sp;cout<<endl;
    // temp=vv;
    // sort(temp.begin(),temp.end());
    // if (odd==0 or  even==0){
    //     for (auto &x:vv)cout<<x<<sp;cout<<endl;
    //     return;
    // }
    // for (int i=0;i<x;i++){
    //     if (vv[i]==temp[i])
    //     {
            
    //         continue;
    //     }else if (temp[i]<vv[i]){
    //         if ((temp[i]&1 and  vv[i]%2==0) or (temp[i]%2==0  and vv[i]&1)){
    //             swap(temp[i],vv[i]);
    //             odd--;
    //             even--;
    //         }else{
    //             if (temp[i]%2==0 and even>0){
    //                 swap(temp[i],vv[i]);
    //                 even--;
    //             }else if (temp[i]&1 and odd>0){
    //                 swap(temp[i],vv[i]);
    //                 odd--;
    //             }
    //         }
            
    //     }else  if (temp[i]>vv[i]){
    //         if (temp[i]%2==0 and even>0){
    //             swap(temp[i],vv[i]);
    //             even--;
    //         }else if (temp[i]&1 and odd>0){
    //             swap(temp[i],vv[i]);
    //             odd--;
    //         }
    //     }
    // }
    // for (auto &x:vv)cout<<x<<sp;cout<<endl;
    // vector<ll>even,odd,res;
    // for (int i=0;i<x;i++){
    //     if (vv[i]&1)odd.push_back(vv[i]);
    //     else even.push_back(vv[i]);
    // }
    // temp=vv;
    // sort(temp.begin(),temp.end());
    // ll ev=0;
    // ll od=0;
    // for (int i=0;i<x;i++){
    //     if (vv[i]==temp[i]){
    //         res.push_back(vv[i]);
    //         if (vv[i]&1)od++;
    //         else  ev++;
    //     }else if (vv[i]&1 ){
    //         if (vv[i]<even[ev] and ev<even.size()){
    //             res.push_back(even[i]);
    //             ev++;
    //         }
    //     }else{
    //         if (vv[i]<odd[od] and od<odd.size()){
    //             res.push_back(odd[od]);
    //             od++;
    //         }
    //     }
    // }
    // for (auto &x:res)cout<<x<<sp;cout<<endl;
//     vector<pair<ll,pair<bool,ll>>>even,odd;
//     for (int i=0;i<x;i++){
//         if (vv[i]&1)odd.push_back({vv[i],{true,i}});
//         else
//         even.push_back({vv[i],{true,i}});
//     }
//     sort(even.begin(),even.end());
//     sort(odd.begin(),odd.end());
//     if (even.size()==0 or odd.size()==0){
//         for (auto &x:vv)cout<<x<<sp;cout<<endl;
//         return;
//     }
//     ll e=0,od=0;
//     for (int i=0;i<x;i++){
//         if (vv[i]&1){
//             if (even[e].first<vv[i]){
//                 vv[i]=even[e].first;
//                 even[e].second.first=false;
//                 vv[even[e].second.second]=vv[i];
//                 e++;
//             }else if (even[e].first==vv[i]){
//                 e++;
//             }
//         }else{
//             if (odd[od].first<vv[i]){
//                 vv[i]=odd[od].first;
//                 odd[od].second.first=false;
//                 vv[odd[od].second.second]=vv[i];
//                 od++;
//             else if (odd[od].first==vv[i]){od++;}
//         }
//     }
// }
//     for (int i=0;i<vv.size();i++){
//         cout<<vv[i]<<sp;
//     }
//     cout<<endl;

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