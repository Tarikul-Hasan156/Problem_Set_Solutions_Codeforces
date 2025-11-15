//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll x,k;cin>>x>>k;
   vector<pair<ll,ll>>pr;
   for (int i=0;i<x;i++){
    ll temp;cin>>temp;
     temp=temp%k;
    if (temp==0)temp=temp+k;
    pr.push_back({-temp,i+1});
   }
    stable_sort(pr.begin(),pr.end());
    // reverse(pr.begin(),pr.end());
    for (auto &x:pr){
        cout<<x.second<<sp;
    }cout<<endl;
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