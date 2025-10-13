//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll x; cin>>x;
    vector<ll>vv(x+1,0);
    for ( int i=1;i<=x;i++)cin>>vv[i];
    // vector<ll>res;
    ll mx=0;
    for (int i=1;i<=x;i++)
    {
        if (vv[i]>i)mx=max(mx,vv[i]-i);
    }
    cout<<mx<<endl;
    // auto it=max_element(vv.begin(),vv.end());
    // ll mx=*it;
    // ll mx_index=it-vv.begin();
    // ll ans=mx-x+(x-mx_index-1);
    // if (ans==0)
    // {
    //     ll temp=0;
    //     for ( int i=0;i<x;i++){
    //         if (vv[i]>i+1)temp++;
    //     }
    //     if (temp>0)
    //     {
    //         cout<<temp<<endl;
    //     }else cout<<0<<endl;
    //     return;
        
    // }
    // if (ans<0)cout<<0<<endl;
    // else cout<<ans<<endl;
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