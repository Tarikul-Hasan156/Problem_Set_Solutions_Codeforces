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
    vector<bool>hash(101,true);
    for (int i=0;i<x;i++){
        cin>>vv[i];
        hash[vv[i]]=false;
    }
    for (int i=0;i<hash.size();i++)
    {
        if (hash[i])
        {
            cout<<i<<endl;
            return;
        }
    }
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