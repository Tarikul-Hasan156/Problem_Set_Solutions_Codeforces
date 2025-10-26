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
    vector<ll>vv(x+1,0),temp(x+1,0);
    for (int i=1;i<=x;i++)cin>>vv[i];
    temp=vv;
    sort(temp.begin(),temp.end());
    if (temp==vv){
        cout<<"yes"<<endl;
        cout<<1<<sp<<1<<endl;
        return;
    }
    vector<ll>rem;
    bool flag=true;
    ll m=0,n=0;
    for (int i=1;i<=x;i++){
        rem.push_back(abs(temp[i]-vv[i]));
        if (abs(temp[i]-vv[i])>0 and flag){
            m=i;
            flag=false;
        }
        if (abs(temp[i]-vv[i])>0)n=i;
    }
    // set<ll>st(rem.begin(),rem.end());
    // ll sum=accumulate(rem.begin(),rem.end(),0LL);
    // ll temp_sum=0;
    // for (auto x:st){
    //     temp_sum+=x*2;
    // }
    reverse(vv.begin()+m,vv.begin()+n+1);
    if (vv==temp){
        cout<<"yes"<<endl;
        cout<<m<<sp<<n<<endl;
    }else cout << "no"<<endl;

    // if (temp_sum==sum){
    //     cout<<"yes"<<endl;
    //     cout<<m<<sp<<n<<endl;
    // }else {cout<<"no"<<endl;}}
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