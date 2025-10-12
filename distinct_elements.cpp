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
    // bool ok=false;
    // for (int i=0;i<x-1;i++)
    // {
    //     if (vv[i]==vv[i]-1)ok=false;
    //     else 
    //     {
    //         ok=true;
    //         break;
    //     }
    // }
    // if (!ok){
    //     for (int i=0;i<x;i++)
    //     {
    //         cout<<2<<sp;
    //     }
    //     cout<<endl;
    //     return;
    // }
    ll temp=2;
    vector<ll>res;
     res.push_back(1);
     ll n=2;
    for ( int i=1;i<x;i++)
    {
        ll option=vv[i]-vv[i-1];
       ll diff=i-option+1;
       if (diff==0)res.push_back(n++);
       else res.push_back((res[diff-1]));
        // n=n*(n+1)/2;
        // if (vv[i]==n)res.push_back(temp++);
        // else res.push_back(res.back());
    }
    for (auto &x:res)cout<<x<<sp;cout<<endl;
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