//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve()
{
    ll x;cin>>x;
    vector<ll>v1(x),v2(x);
    for(auto &x:v1)cin>>x;
    for(auto &x:v2)cin>>x;
    map<ll,ll>mp1,mp2;
    ll cnt=1;
    for(int i=1;i<x;i++){
        if(v1[i]==v1[i-1])cnt++;
        else{
            mp1[v1[i-1]]=max(mp1[v1[i-1]],cnt);
            cnt=1;
        }
    }
    mp1[v1[x-1]]=max(mp1[v1[x-1]],cnt);
    cnt=1;
    for(int i=1;i<x;i++){
        if(v2[i]==v2[i-1])cnt++;
        else{
            mp2[v2[i-1]]=max(mp2[v2[i-1]],cnt);
            cnt=1;
        }
    }
    mp2[v2[x-1]]=max(mp2[v2[x-1]],cnt);
    ll ans=0;
    for(auto &p:mp1){
        ans=max(ans,p.second+mp2[p.first]);
    }
    for(auto &p:mp2){
        ans=max(ans,p.second+mp1[p.first]);
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