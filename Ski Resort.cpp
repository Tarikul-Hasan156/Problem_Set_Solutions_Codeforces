//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll n,k,q;cin>>n>>k>>q;
    vector<ll>vv(n);
    for (auto &x:vv)cin>>x;
    vector<ll>res;
    ll total=0;
    for (int i=0;i<n;i++){
        if (vv[i]<=q)total++;
        else{
            if (total>=k){
                res.push_back(total);
            }
            total=0;
        }
    }
    ll ans=0;
    if (total>=k)res.push_back(total);
    for (int i=0;i<(int)res.size();i++){
        for (int j=k;j<=res[i];j++){
            ans+=(res[i]-j+1);
        }
    }
    cout<<ans<<endl;
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