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
    vector<ll>vv(x+1);
    vv[0]=0;
    for (int i=1;i<=x;i++)cin>>vv[i];
    vector<ll>res;
    for (int i=1;i<x;i++){
        for (int j=i+1;j<=x;j++){
            res.push_back(vv[i]+vv[j]+j-i);
        }
        
    }
    ll mn=*min_element(res.begin(),res.end());
    cout<<mn<<endl;
}
int main ()
{
    speed;
    int tt;
    cin>>tt;
    while (tt--)
    {
        solve ();
    }
    return 0;
}