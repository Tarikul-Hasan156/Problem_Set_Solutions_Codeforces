//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
 const ll mod=1073741824;
 const ll N=1e6+3;
void solve ()
{
    vector<ll>vv(N,0);
    for (int i=1;i<N;i++){
        for (int j=i;j<N;j+=i){
            vv[j]++;
        }
    }
    ll a,b,c;cin>>a>>b>>c;
    ll ans=0;
    ll res=0;
    for (int i=1;i<=a;i++){
        for (int j=1;j<=b;j++){
            for (int k=1;k<=c;k++){
                ans=(((((i%mod)*(j%mod))%mod)*k%mod)%mod)%mod;
                res+=vv[ans];
            }
        }
    }
    cout<<res<<endl;
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