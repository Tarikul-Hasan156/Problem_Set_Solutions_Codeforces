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
    ll sum_of_even_num=(n/2)*(n/2+1);
    // cout<<sum_of_even_num<<endl;
    ll sum_of_odd_num=((n+1)/2)*((n+1)/2);
    // cout<<sum_of_odd_num<<endl;
   if (n&1){
        cout<<-sum_of_odd_num+sum_of_even_num<<endl;
   }else cout<<sum_of_even_num-sum_of_odd_num<<endl;
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