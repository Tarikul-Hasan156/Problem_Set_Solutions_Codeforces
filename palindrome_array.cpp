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
    ll l=0,r=x-1;
    bool flag=false;
    while (l<=r)
    {
        if (vv[l]!=vv[r]){
            flag=true;
            break;
        }
        l++,r--;
    }
    if (!flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
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