//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll ans=0;
    ll n;cin>>n;
    for (int i=0;i<=n;i+=2){
        if((n-i)%4==0 ){
            ans++;
        }
    }
    ll ans2=0;
    for (int i=0;i<=n;i+=4){
        if ((n-i)%2==0){
            ans2++;
        }
    }
    cout<<max(ans2,ans)<<endl;
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