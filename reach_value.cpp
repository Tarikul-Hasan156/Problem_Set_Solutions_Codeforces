//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
const ll N=1e12;
ll x;
 bool flag=false;
 void reach (ll make){
    if (make>N){
        return;
    }
    if (make==x)flag=true;
    reach(make*10);
    reach(make*20);
 }
void solve ()
{
    cin>>x;
    reach(1);
    cout<<((flag)?"YES":"NO")<<endl;
    flag=false;
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