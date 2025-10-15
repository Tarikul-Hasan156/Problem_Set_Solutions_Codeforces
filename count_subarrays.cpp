//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll x; cin>>x;
    vector<ll>vv(x);
    for (auto &x:vv)cin>>x;
    if (is_sorted(vv.begin(),vv.end())){
        cout<<x*(x+1)/2<<endl;
        return;
    }
    ll cnt=0;
    for (int i=0;i<x;i++){
        vector<ll>temp;
        for (int j=i;j<x;j++){
            temp.push_back(vv[j]);
            if (is_sorted(temp.begin(),temp.end()))cnt++;
        }
    }
    cout<<cnt<<endl;
    // ll res=0,cnt=0;
    // for (int i=0;i<x-1;i++){
    //     if (vv[i]<=vv[i+1])cnt++;
    //     else{
    //         cnt++;
    //         res+=cnt*(cnt+1)/2;
    //         cnt=0;
    //     }
    // }
    // if (cnt>0){
    //     cnt++;
    //     res+=cnt*(cnt+1)/2;
    // }
    // auto mx=max_element(vv.begin(),vv.end());
    // ll mx_index=mx-vv.begin();
    // if (mx_index==0){
    //     cout<<res+1<<endl;
    //     return;
    // }
    // cout<<res<<endl;
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