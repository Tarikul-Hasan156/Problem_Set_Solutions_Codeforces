//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
 ll fibo (ll x){
    if (x==1)return 0;
    if (x==2)return 1;
    return fibo(x-1)+fibo(x-2);
 }
void solve ()
{
    ll x; cin>>x;
    ll res=fibo(x);
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