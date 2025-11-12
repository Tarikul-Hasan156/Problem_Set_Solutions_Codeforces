//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll x,cost;cin>>x>>cost;
    ll remain=x-1;
    ll ans=cost;
    vector<pair<ll,ll>>pr;
   vector<ll>temp1(x),temp2(x);
   for (auto &x:temp1)cin>>x;
   for (auto &x:temp2)cin>>x;
   for (int i=0;i<x;i++){
        pr.push_back({temp2[i],temp1[i]});
   }
   sort(pr.begin(),pr.end());
   for(int i=0;i<x;i++){
        if (remain==0){
            cout<<min((x*cost),ans)<<endl;
            return;
        }
      else  if (remain-pr[i].second<=0){
            ans+=min((remain*cost),(pr[i].first*remain));
            cout<<min((x*cost),ans)<<endl;
            return;
        }else{
            ans+=min((pr[i].first*pr[i].second),(pr[i].second*cost));
            remain-=pr[i].second;
        }
   }
//    cout<<min((x*cost),ans)<<endl;
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