//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
 ll fact (ll n,ll r){
    if (n<r or r<0 or n<0)return 0;
    if (n==0)return 1;
    return fact(n-1,r)+fact(n-1,r-1);
 }
void solve ()
{
    ll x,y;cin>>x>>y;
    ll res=fact(x,y);
    cout<<res<<endl;
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