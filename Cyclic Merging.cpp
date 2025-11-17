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
    vector<ll>res;
    for (int i=0;i<x-1;i++){
        res.push_back(max(vv[i],vv[i+1]));
    }
    res.push_back(max(vv[x-1],vv[0]));
    ll sum=accumulate(res.begin(),res.end(),0LL);
    ll mx=*max_element(res.begin(),res.end());
    cout<<sum-mx<<endl;
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