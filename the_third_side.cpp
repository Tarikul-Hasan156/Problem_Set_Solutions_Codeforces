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
    vector<ll>vv(x+1,0);
    for (int i=1;i<=x;i++)cin>>vv[i];
    if (x==1){
        cout<<vv[1]<<endl;
    }else if (x==2){
        cout<<vv[1]+vv[2]-1<<endl;
    }else{
        ll sum=vv[1]+vv[2]-1;
        for (int i=3;i<=x;i++){
            sum+=vv[i]-1;
        }
        cout<<sum<<endl;
    }
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