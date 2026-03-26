//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
ll val;
ll ans=LLONG_MIN;
ll mn=LLONG_MAX;
vector<ll>vv(22);
vector<bool>check(22);
void sub_sequence(ll pos, ll x){
    if (pos>x){
        bool flag=false;
        for (int i=1;i<=pos;i++){
            if (check[i]){
                if (vv[i]==mn)flag=true;
            }
        }
        if (flag){
            ll res=val;
            for (int i=1;i<=pos;i++){
                if (check[i]){
                    // cout<<vv[i]<<sp;
                    res%=vv[i];
                }
            }
            // cout<<endl;
            // cout<<"R: "<<res<<endl;
            ans=max(ans,res);
        }
        return;
    }
    check[pos]=false;
    sub_sequence(pos+1,x);
    check[pos]=true;
    sub_sequence(pos+1,x);
}
void solve ()
{
    ll x; cin>>x;
    for (int i=1;i<=x;i++){
        cin>>vv[i];mn=min(mn,vv[i]);
    }
    sort(vv.begin()+1,vv.end());
    // cout<<mn<<endl;
    reverse(vv.begin()+1,vv.end());
    cin>>val;
    sub_sequence(1,x);
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