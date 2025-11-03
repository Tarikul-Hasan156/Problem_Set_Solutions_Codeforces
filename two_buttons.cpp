//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll x,y;cin>>x>>y;
    if (x>=y){
        cout<<x-y<<endl;
        return;
    }
    double ef_x=log2(x);
    double ef_y=log2(y);
    // cout<<ef_x<<sp<<ef_y<<endl;
    if (ef_x==(ll)ef_x and ef_y==(ll)ef_y){
        cout<<(ll)ef_y-ef_x<<endl;
        // cout<<rand()<<endl;
        return;
    }
    if (ef_y==(ll)ef_y){
        ll diff=y-x;
        diff=ceil(log2(diff));
        cout<<diff<<endl;
        // cout<<rand()<<endl;
        return;

    }
    ll ans=0;
    // if (x*2<=y){
        while ( y>x){
        if (y%2==0)y/=2;
        else y++;
        ans++;
          }
          cout<<ans+(x-y)<<endl;
    //      cout<<ans<<endl;
    // }else{
        // if (y%2==0)
    //     cout<<min(abs(x*2-y),abs(x-(y/2))+1)<<endl;
        
    // }
    
    // if (y%2==0){
    //     ll ans=0;
    //     ll temp_y=y;
    //     while (temp_y>=x and temp_y%2==0){
    //         if (x==temp_y)break;
    //         temp_y/=2;
    //         ans++;
    //     }
    //     if (temp_y==x){
    //         cout<<ans<<endl;
    //         return;
    //     }else if (temp_y<x){
    //         cout<<x-temp_y+ans<<endl;
    //         return;
    //     }else{
    //         y=temp_y;
    //         goto level;
    //     }
    // }
    // level:
    // ll temp1=x-1;
    // ll pre=0;
    // while (x<=y){
    //     if (x==y)break;
    //     x*=2;
    //     pre++;
    // }
    // pre+=(x-y);
    // ll suff=1;
    // if (temp1==0){
    //     cout<<pre<<endl;
    //     return;
    // }
    // while (temp1<=y){
    //     if (temp1==y)break;
    //     // cout<<temp1<<sp<<y<<endl;
    //     temp1*=2;suff++;
    // }
    // suff+=abs(y-temp1);
    // // cout<<pre<<sp<<suff<<endl;
    // cout<<min(suff,pre)<<endl;

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