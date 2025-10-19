//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
ll check_last_bit (ll x){
    ll temp=0;
    for (int i=0;i<63;i++){
        if ((x>>i)&1)temp=i;
    }
    return temp;
}
void solve ()
{
    ll a,b;cin>>a>>b;
    if (a==b){cout<<0<<endl;return;}
    if (check_last_bit(b)>check_last_bit(a)){cout<<-1<<endl;return;}
    vector<ll>res,res1;
    for (int i=0;i<63;i++){
        ll temp=1LL<<i;
        if (temp<=a and ((temp & a)==0)){
            a+=temp;
            res.push_back(temp);
        }
        // if (temp<=a and ((temp&b)==0))res1.push_back(temp);
    }
    for (int i=0;i<63;i++){
        ll temp=1LL<<i;
        if (temp<=a and ((temp & b)==0)){
            // a+=temp;
            res.push_back(temp);
        }
        // if (temp<=a and ((temp&b)==0))res1.push_back(temp);
    }
    cout<<res.size()<<endl;
    for (auto &x:res)cout<<x<<sp;cout<<endl;
    
   
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