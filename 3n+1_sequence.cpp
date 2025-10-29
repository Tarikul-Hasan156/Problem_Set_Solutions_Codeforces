//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
  ll cnt=0;
  void length (ll x){
    cnt++;
    if (x==1)return;
    if (x&1){
        length(3*x+1);
    }else{
        length(x/2);
    }
  }
void solve ()
{
    ll x;cin>>x;
    length(x);
    cout<<cnt<<endl;
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