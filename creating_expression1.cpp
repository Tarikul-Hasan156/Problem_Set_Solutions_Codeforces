//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
vector<ll>vv(21);
// vector<ll>check(21);
ll x,target;
bool flag=false;
void creating_expression (ll pos,ll n){
    if (pos>x){
        if (n==target)flag=true;
        return;
    }
    // check[pos]=false;
    creating_expression(pos+1,n+vv[pos]);
    // check[pos]=true;
    creating_expression(pos+1,n-vv[pos]);
}
void solve ()
{
    cin>>x>>target;
    for (int i=1;i<=x;i++)cin>>vv[i];
    creating_expression(2,vv[1]);
    cout<<((flag)?"YES":"NO")<<endl;
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