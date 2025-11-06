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
    vector<ll>vv(x+1);
    for (int i=1;i<=x;i++){
        cin>>vv[i];
    }
    for (int i=1;i<=x;i++){
        for (int j=i+1;j<=x;j++){
            ll temp=vv[j]%vv[i];
            if (temp%2==0 or temp==0){
                cout<<vv[i]<<sp<<vv[j]<<endl;
                return;
            }
        }
    }
    cout<<-1<<endl;
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