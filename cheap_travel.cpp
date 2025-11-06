//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll n,m,a,b;cin>>n>>m>>a>>b;
    ll res=0;
    if (m*a>b){
        res+=((n/m)*b);
        if (n%m!=0){
            ll temp=n%m;
            res+=min(b,temp*a);
        }
        cout<<res<<endl;
    }else cout<<n*a<<endl;
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