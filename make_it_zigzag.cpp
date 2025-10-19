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
    vector<ll>vv(x),mx;
    for (auto &x:vv)cin>>x;
    ll temp=LLONG_MIN;
    for (int i=0;i<x;i++){
        temp=max(vv[i],temp);
        mx.push_back(temp);
    }
    // if (vv[0]==vv[x-1]){
    //     if (x&1){
    //         cout<<ceil(x/2.0)<<endl;
    //     }else cout<<x/2<<endl;
    //     return;
    // }
    // ll mx=*max_element(vv.begin(),vv.end());
    ll ans=0;
    for (int i=1;i<x;i+=2)vv[i]=mx[i];
    // for (auto &x:vv)cout<<x<<sp;cout<<endl;
    if (x&1){
             for (int i=1;i<x-1;i+=2){
            if (vv[i]<=vv[i-1]){ans+=(abs(vv[i]-vv[i-1])+1);vv[i-1]=vv[i-1]-(abs(vv[i]-vv[i-1])+1);}
            if (vv[i]<=vv[i+1]){ans+=(abs(vv[i]-vv[i+1])+1);vv[i+1]=vv[i+1]-(abs(vv[i]-vv[i+1])+1);}
        }
        // for (auto &x:vv)cout<<x<<sp;cout<<endl;
        cout<<ans<<endl;
    }else{
        for (int i=1;i<x;i+=2){
            if (i==x-1){
                if (vv[i]<=vv[i-1])ans+=(abs(vv[i]-vv[i-1])+1);
            }else{
                if (vv[i]<=vv[i-1]){ans+=abs(vv[i]-vv[i-1])+1;vv[i-1]=vv[i-1]-(abs(vv[i]-vv[i-1])+1);}
                if (vv[i]<=vv[i+1]){ans+=abs(vv[i]-vv[i+1])+1;vv[i+1]=vv[i+1]-(abs(vv[i]-vv[i+1])+1);}
            }
        }
        cout<<ans<<endl;
    }
    
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