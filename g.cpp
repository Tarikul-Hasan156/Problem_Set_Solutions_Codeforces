//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll x=1,y,k;cin>>y>>k;
    set<ll>st;
    for (int i=1;i*i<=y;i++){
        if (y%i==0){
            st.insert(i);
            st.insert(y/i);
        }
    }
    vector<ll>div(st.begin(),st.end());
    while (k>0){
        ll currect_gcd=__gcd(x,y);
        ll next_g=-1;
        for (int i=0;i<div.size()-1;i++){
            if (currect_gcd==div[i]) {
                next_g=div[i+1];
                break;
            }
        }
        if (next_g==-1){
            x+=k*currect_gcd;
            cout<<x<<endl;
            return;
        }
        ll remain=x%next_g;
        ll step=0;
        if (remain==0){
            step=0;
        }else{
            step=(next_g-remain+currect_gcd-1)/currect_gcd;
        }
        if (step==0)step=1;
        if (step>k)step=k;
        x+=step*currect_gcd;
        k-=step;
    }
    cout<<x<<endl;
    
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