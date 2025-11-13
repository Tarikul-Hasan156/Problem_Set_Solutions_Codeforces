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
    ll res=0;
    ll mn=LLONG_MAX;
    if (x==1){
        ll temp;cin>>temp;
        ll ans=LLONG_MAX;
        vector<ll>vv(temp);
        for (int i=0;i<temp;i++){
            cin>>vv[i];
            ans=min(ans,vv[i]);
        }
        cout<<ans<<endl;return;
    }
    vector<ll>mx_vec;
    while (x--){
       ll size;cin>>size;
       vector<ll>vv(size);
       for (auto &x:vv)cin>>x;
       sort(vv.begin(),vv.end());
       mx_vec.push_back(vv[1]);
       mn=min(mn,vv[0]);
    }
    sort(mx_vec.rbegin(),mx_vec.rend());
    for (int i=0;i<mx_vec.size()-1;i++){
        res+=mx_vec[i];
    }
    cout<<res+mn<<endl;
    
    // x-=1;
    // vector<ll>mx_vec;
    // while (x--){
    //     ll temp;cin>>temp;
    //     vector<ll>vv(temp);
    //     ll mx_temp=LLONG_MIN;
    //     for (int i=0;i<temp;i++){
    //         cin>>vv[i];
    //         mx_temp=max(mx_temp,vv[i]);
    //         mn=min(mn,vv[i]);
    //     }
    //     mx_vec.push_back(mx_temp);
    // }
    // ll last_size;cin>>last_size;
    // vector<ll>vv(last_size);
    // for (int i=0;i<last_size;i++){
    //     mn=min(mn,vv[i]);
    // }
    // cout<<res+mn<<endl;

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