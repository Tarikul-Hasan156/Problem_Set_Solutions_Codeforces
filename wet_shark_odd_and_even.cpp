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
    ll sum=0;
    for (int i=0;i<x;i++){
        cin>>vv[i];sum+=vv[i];
    }
    if (sum%2==0){cout<<sum<<endl;return;}
    sort(vv.begin(),vv.end());
    for (int i=0;i<x;i++){          
        if ((sum-vv[i])%2==0){
            cout<<sum-vv[i]<<endl;
            return;
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