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
    for (auto &x:vv)cin>>x;
    ll negative=0;
    for (int i=0;i<x;i++){
        if (vv[i]<0)negative++;
    }
    vector<ll>pre(x+1,0);
    for (int i=1;i<=x;i++){
        pre[i]=pre[i-1]+vv[i-1];
    }
    // for (auto &x:pre)cout<<x<<sp;cout<<endl;
    bool flag=false;
    vector<ll>min_pre(x+1,LLONG_MAX),min_suf(x+2,LLONG_MAX);
    min_pre[1]=pre[1];
    for (int i=2;i<=x;i++){
        min_pre[i]=min(min_pre[i-1],pre[i]);
    }
    min_suf[x]=pre[x];
    for (int i=x-1;i>=1;i--){
        min_suf[i]=min(min_suf[i+1],pre[i]);
    }
    // for (auto &x:min_suf)cout<<x<<sp;cout<<endl;
    // for (auto &x:min_pre)cout<<x<<sp;cout<<endl;
    ll ans=0;
    ll sum=pre[pre.size()-1];
    for (int i=0;i<x;i++){
        ll r=min_suf[i+1]-pre[i];
        ll l=LLONG_MAX;
        if (i>0){
            l=(sum-pre[i])+min_pre[i];
        }
        if (r>=0 and l>=0)ans++;
    }
    cout<<ans<<endl;

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