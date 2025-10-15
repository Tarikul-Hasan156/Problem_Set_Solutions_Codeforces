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
    for (int i=0;i<x;i++){
        ll mx=LLONG_MIN;
        for (int j=i;j<x;j++){
            mx=max(vv[j],mx);
            res.push_back(mx);
        }
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