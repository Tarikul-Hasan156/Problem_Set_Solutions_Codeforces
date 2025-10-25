//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    int x;cin>>x;
    double res=log2(x);
    if (res==(int)res){
        cout<<-1<<endl;
        return;
    }else{
        ll temp=0;
        ll cnt=0;
        for (int i=0;i<32;i++){
            if ((x>>i)&1){
                temp=i;cnt++;
            }
        }
       ll ans=0;
       for (int i=0;i<temp;i++){
        ans+=(1<<i);
       }
       ll x_temp_res=0;
       for (int i=0;i<cnt;i++){
        x_temp_res+=(1<<i);
       }
       if (x_temp_res==x){
        cout<<-1<<endl;
        return;
       }
       cout<<ans<<endl;
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