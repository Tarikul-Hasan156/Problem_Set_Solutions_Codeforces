//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
 ll mul (ll base, ll power){
        // if (base==0 and power==0)return 1;
        // if (base==0)return 1;
        // if (power==0)return 1;
        ll res=1;
        while (power!=0){
            if (power&1){
                res*=base;// 2 
                power--;//
            }else{
                base*=base;
                power/=2;
            }
        }
        return res;
 }
void solve ()
{
    ll x,n;cin>>x>>n;
    ll res=0;
    for (int i=0;i<=n;i+=2){
        if (i==0){
            res+=mul(x,i)-1;
        }else{
            res+=mul(x,i);
        }
    }
    cout<<res<<endl;
}
int main ()
{
    // speed;
    // int tt;
    // cin>>tt;
    // while (tt--)
    // {
        solve ();
    // }
    return 0;
}