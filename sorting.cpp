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
    vector<ll>vv(x);
    for (auto &x:vv)cin>>x;
    for (int i=0;i<x-1;i++){
        for (int j=i;j<x;j++)
        {
            if (vv[j]<vv[i])swap(vv[j],vv[i]);
        }
    }
    for (auto &x:vv)cout<<x<<sp;cout<<endl;
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