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
    if (x==1)cout<<0<<endl;
    else if (x==2)cout<<1<<endl;
    else {
        vector<ll>vv;
        vv.push_back(0);
        vv.push_back(1);
        vv.push_back(2);
        for (int i=3;i<=x;i++){
            vv.push_back(vv[i-1]+vv[i-2]);
        }
        cout<<vv[x-2]<<endl;
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