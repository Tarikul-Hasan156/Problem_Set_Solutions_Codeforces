//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
const ll N=1e7+2;
using namespace std;
     
void solve ()
{
    ll x;cin>>x;
    vector<ll>vv(x),v(x);
    for (auto &x:v)cin>>x;
    for (auto &x:vv)cin>>x;
    sort(v.begin(),v.end());
    sort(vv.begin(),vv.end());
    for (int i=0;i<x;i++){
        if (vv[i]!=v[i]){
            cout<<"no"<<endl;return;
        }
    }
    cout<<"yes"<<endl;
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