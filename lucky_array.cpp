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
    sort(vv.begin(),vv.end());
    ll cnt=0;
    for (int i=0;i<x;i++){
        if (vv[i]==vv[0])cnt++;
    }
    if (cnt&1)cout<<"Lucky"<<endl;
    else cout<<"Unlucky"<<endl;
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