//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
const ll N=1e9;
using namespace std;
     
void solve ()
{
    ll n,k;cin>>n>>k;
    vector<ll>vv(n+1,0);
    for (int i=1;i<=n;i++)
    {
        cin>>vv[i];
    }
    ll mx_cnt=0,mn_cnt=0;
    for (int i=1;i<=n;i++)
    {
        if (vv[i]==vv[1])mn_cnt++;
        if (vv[i]==vv[n])mx_cnt++;
    }
    sort(vv.begin(),vv.end());
    if (k==0)
    {
        if (vv[1]==1)cout<<-1<<endl;
        else cout<<vv[1]-1<<endl;
    }else if (k==n)
    {
       cout<<N<<endl;
    }else
    {
            if (vv[k]==vv[k+1])cout<<-1<<endl;
            else cout<<vv[k]<<endl;
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