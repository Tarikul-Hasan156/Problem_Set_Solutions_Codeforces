//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll n, m; cin >> n >> m;
    vector<ll>v(n),vv(m);
    for (auto &x:v)cin>>x;
    for (auto &x:vv)cin>>x;
    ll l=0,cnt=0;
    for (int i=0;i<v.size();i++){
        if (v[i]==vv[l]){
            cnt++;
            l++;
        }
    }
    if (cnt==vv.size())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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