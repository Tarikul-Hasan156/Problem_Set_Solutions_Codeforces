//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll x,y;cin>>x>>y;
    while (x--){
        vector<ll>vv(y);
        for (auto &x:vv)cin>>x;
        reverse(vv.begin(),vv.end());
        for (auto &x:vv)cout<<x<<sp;cout<<endl;
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