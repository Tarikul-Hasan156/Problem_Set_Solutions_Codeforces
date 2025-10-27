//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll x,k;cin>>x>>k;
    vector<pair<ll,pair<ll,ll>>>vv(x);
    for (int i=0;i<x;i++){
        cin>>vv[i].first>>vv[i].second.first>>vv[i].second.second;
    }
    sort(vv.begin(),vv.end());
    // for (int i=0;i<x;i++){
    //     cout<<vv[i].first<<sp<<vv[i].second.first<<sp<<vv[i].second.second<<endl;
    // }
    // cout<<endl;
    for (int i=0;i<x;i++){
        ll l=vv[i].first;
        ll r=vv[i].second.first;
        ll val=vv[i].second.second;
        if (k>=l and k<=r and val>k)k=val;
    }
    cout<<k<<endl;
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