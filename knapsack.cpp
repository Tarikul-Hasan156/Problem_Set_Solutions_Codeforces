//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
 vector<pair<ll,ll>>pr(21);  
 vector<bool>check(21);
 ll n,w; 
ll mx=LLONG_MIN;
void mx_val(ll pos,ll x){
    if (pos>x){
        ll value=0,weight=0;
        for (int i=1;i<pos;i++){
            if (check[i]){
                weight+=pr[i].first;
                value+=pr[i].second;
            }
        }
        if (weight<=w){
            mx=max(mx,value);
        }
        return;

    }
    check[pos]=false;
    mx_val(pos+1,x);
    check[pos]=true;
    mx_val(pos+1,x);
}
void solve ()
{
    cin>>n>>w;
    for (int i=1;i<=n;i++){
        cin>>pr[i].first>>pr[i].second;
    }
    mx_val(1,n);
    cout<<mx<<endl;
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