//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
     ll n;cin>>n;
    if(n==0){cout<<"YES"<<endl;return ;}
    ll L=64-__builtin_clzll(n);bool ok=false;
    for(int m=L;m<=2*L;m++){
         ll r=0,t=n;
        for(int i=0;i<m;i++){r<<=1;r|=(t>>i)&1ULL;}
        if(r==n){
            if(m%2==0||(n>>(m/2)&1ULL)==0){ok=true;break;}
        }
    }
    cout<<(ok?"YES":"NO")<<endl;
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