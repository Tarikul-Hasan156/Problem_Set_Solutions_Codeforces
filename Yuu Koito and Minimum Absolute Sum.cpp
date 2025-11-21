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
    ll index=-1;
    for (int i=0;i<x;i++){
        cin>>vv[i];
        if (vv[i]==-1){
            index=i;
        }
    }
    if (index==-1){
        ll sum=0;
        for (int i=0;i<x-1;i++){
            sum+=vv[i+1]-vv[i];
        }
        cout<<abs(sum)<<endl;
        for (auto &x:vv)cout<<x<<sp;cout<<endl;return;
    }
    for (int i=1;i<x-1;i++){
        if (vv[i]==-1)vv[i]=0;
    }
    if (vv[0]==-1 and vv[x-1]==-1){
        vv[0]=0;
        vv[x-1]=0;
    }else if (vv[0]==-1){
        // ll temp_sum=LLONG_MAX;
        // for (int i=0;i<=1e6;i++){
        //     ll val=abs(vv[x-1]-i);
        //     if (val>temp_sum){
        //         break;
        //     }else{
        //         vv[0]=i;
        //         temp_sum=val;
        //     }
        // }
        vv[0]=vv[x-1];
    }else if (vv[x-1]==-1){
        // ll temp_sum=LLONG_MAX;
        // for (int i=0;i<=1e6;i++){
        //     ll  val=abs(vv[0]-i);
        //     if (val>temp_sum){
        //         break;
        //     }else{
        //         vv[x-1]=i;
        //         temp_sum=val;
        //     }
        // }
        vv[x-1]=vv[0];
    }
    ll sum=0;
    for (int i=0;i<x-1;i++){
        sum+=(vv[i+1]-vv[i]);
    }
    cout<<abs(sum)<<endl;
    for (auto &x:vv)cout<<x<<sp;cout<<endl;
    // if (is_sorted(vv.begin(),vv.end()) and vv[0]==-1 and  vv[x-1]==-1){
    //     cout<<0<<endl;
    //    for (int  i=0;i<x;i++)cout<<0<<sp;cout<<endl;return;
    // }
    // for (int i=0;i<index;i++){
    //     if (vv[i]==-1)vv[i]=0;
    // }
    // ll sum=0,cnt=0;
    // for (int i=0;i<x-1;i++){
    //     if (vv[i+1]!=-1 and vv[i]!=-1){
    //         cnt++;
    //         sum+=vv[i+1]-vv[i];
    //     }
    // }
    // if (cnt==0){
    //     if (x==2){
    //         if (index==0){
    //             cout<<0<<endl;
    //             cout<<vv[1]<<sp<<vv[1]<<endl;
    //             return;
    //         }else{
    //             cout<<0<<endl;
    //             cout<<vv[0]<<sp<<vv[0]<<endl;
    //             return;
    //         }
    //     }else{
    //         vv[index]=0;
    //        ll sum=0;
    //        for (int i=0;i<x-1;i++){
    //             sum+=vv[i+1]-vv[i];
    //        }
    //     }
    //     cout<<sum<<endl;
    //     for (auto &x:vv)cout<<x<<sp;cout<<endl;return;
    // }
    // if (sum==0){
    //    if (index==0){
    //     vv[index]=vv[index+1];
    //    }else if (index==x-1){
    //     vv[index]=vv[index-1];
    //    }else{
    //         ll last=LLONG_MIN;
    //         for (int i=0;i<=1e6;i++){
    //             ll val1=i-vv[index-1];
    //             ll val2=vv[index+1]-i;
    //             if (val1+val2>=0){
    //                 sum=val1+val2;
    //                 vv[index]=i;
    //                 break;
    //             }
    //         }
    //         cout<<sum<<endl;
    //         for (auto &x:vv)cout<<x<<sp;cout<<endl;return;
    //    }
    // }else if (sum<0){
    //     if (index==0){
    //         for (int i=0;i<=1e6;i++){
    //             ll val1=vv[index+1]-i;
    //             if (val1+sum>=0){
    //                 vv[index]=i;
    //                 sum+=val1;
    //                 break;
    //             }
    //         }
    //         cout<<sum<<endl;
    //         for (auto &x:vv)cout<<x<<sp;cout<<endl;return;
    //     }else if (index==x-1){
    //         for (int i=0;i<=1e6;i++){
    //             ll val1=i-vv[index-1];
    //             if (sum+val1>=0){
    //                 sum+=val1;
    //                 vv[index]=i;
    //                 break;
    //             }
    //         }
    //         cout<<sum<<endl;
    //         for (auto &x:vv)cout<<x<<sp;cout<<endl;return;
    //     }else{
    //         for (int i=0;i<=1e6;i++){
    //             ll val1=vv[index+1]-i;
    //             ll val2=i-vv[index-1];
    //             if (abs(val1+val2+sum)>=0){
    //                 sum+=val1+val2;
    //                 vv[index]=i;
    //                 break;
    //             }
    //         }
    //         cout<<abs(sum)<<endl;
    //         for (auto &x:vv)cout<<x<<sp;cout<<endl;return;
    //     }
    // }else{
    //     vv[index]=0;
    //     ll new_sum=0;
    //     for (int i=0;i<x-1;i++){
    //         new_sum+=vv[i+1]-vv[i];
    //     }
    //     cout<<new_sum<<endl;
    //     for (auto &x:vv)cout<<x<<sp;cout<<endl;return;
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