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
    string s;cin>>s;
    vector<ll>res;
    for (int i=0;i<x;i++){
        if (s[i]=='1')res.push_back(i+1);
    }
    cout<<res.size()<<endl;
    for (auto &x:res)cout<<x<<sp;cout<<endl;
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