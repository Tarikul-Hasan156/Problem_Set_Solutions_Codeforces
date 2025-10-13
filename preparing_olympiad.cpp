//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll n, l, r, x;cin>>n>>l>>r>>x;
    vector<ll>vv(n);
    for (int i=0;i<n;i++)cin>>vv[i];
    ll cnt=0;
    sort(vv.begin(),vv.end());
    for (int i=0; i<(1<<n);i++)
    {
        ll temp=i;
        vector<ll>res;
        for (int j=0;j<n;j++)
        {
            if ((temp>>j)&1)res.push_back(vv[j]);
        }
        if (res.size()<2)continue;
        ll sum=accumulate(res.begin(),res.end(),0LL);
        ll mx=*max_element(res.begin(),res.end());
        ll mn=*min_element(res.begin(),res.end());
        if (sum>=l and sum<=r and (mx-mn)>=x)cnt++;
    }
    cout<<cnt<<endl;
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