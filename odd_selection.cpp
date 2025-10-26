//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll  n,x;cin>>n>>x;
    vector<ll>vv(n);
    ll odd_cnt=0;
   for (int i=0;i<n;i++){
    cin>>vv[i];
    if (vv[i]%2!=0)odd_cnt++;
   }
//    cout<<odd_cnt<<endl;
   ll even_cnt=n-odd_cnt;
   if (odd_cnt<=0){
    cout<<"No"<<endl;
    return;
   }
   if (odd_cnt==n and x%2==0){cout<<"No"<<endl;return;}
//    if (odd_cnt)
//    cout<<odd_cnt<<sp<<even_cnt<<endl;
//    cout<<((odd_cnt&1 or (x-(odd_cnt-1))<=even_cnt)?"Yes":"No")<<endl;
   if (odd_cnt&1){
    cout<<"Yes"<<endl;
   }else{
        ll temp=(x-(odd_cnt-1));
        if (x-(odd_cnt-1)<=even_cnt)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
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