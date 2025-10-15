//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp " "
#define endl '\n'
using namespace std;
ll on_bit (ll x){
    for (int i=0;i<64;i++){
        if ( (x>>i)&1)return i;
    }
}
void solve ()
{
    ll x;cin>>x;
    vector<ll>vv(x);
    bool check=false;
    for (int i=0;i<x;i++)
    {
        cin>>vv[i];
        if (vv[i]&1)check=true;
    }
    if (check)cout<<0<<endl;
    else{
        vector<ll>res,res1;
        for (int i=0;i<x;i++){
            double temp=log2(vv[i]);
            if (temp!=(ll)temp) res.push_back(on_bit(vv[i]));
            else res1.push_back(log2(vv[i]));
        }
        // for (auto &x:res)cout<<x<<sp;cout<<endl;
        if (res.empty()){
            ll ans=*min_element(res1.begin(),res1.end());
            cout<<ans<<endl;
        }else if (res1.empty()){
            ll ans=*min_element(res.begin(),res.end());
            cout<<ans<<endl;
        }else{
            ll mn_res=*min_element(res.begin(),res.end());
            ll mn_res1=*min_element(res1.begin(),res1.end());
            cout<<min(mn_res,mn_res1)<<endl;
        }
        
    }
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