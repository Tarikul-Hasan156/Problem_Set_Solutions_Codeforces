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
    vector<ll>vv(x),temp(x);
    for (auto &x:vv)cin>>x;
    temp=vv;
    sort(temp.begin(),temp.end());
    if (vv==temp){
        cout<<"Sorted"<<endl;
        return;
    }
    ll cnt=0;
    for (int i=0;i<x;i++){
        if (vv[i]!=temp[i]){
            cnt++;
        }
    }
    if (cnt==2){
        cout<<"Sorted"<<endl;

    }else cout<<"Failed"<<endl;
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