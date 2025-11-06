//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll n,m;cin>>n>>m;
    multiset<ll>st,remain;
     vector<pair<ll,ll>>pr(m);
     for (int i=0;i<n;i++){
        ll temp;cin>>temp;
        st.insert(temp);
     }
    for(int i=0;i<m;i++)cin>>pr[i].first;
    for (int i=0;i<m;i++)cin>>pr[i].second;
    sort(pr.begin(),pr.end());
    ll ans=0;
    for (int i=0;i<m;i++){
        if (pr[i].second){
            auto it=st.upper_bound(pr[i].first-1);
            if (it!=st.end()){
                ll temp=*it;
                temp=max(temp,pr[i].second);
                st.erase(it);
                st.insert(temp);
                ans++;
            }
        }else remain.insert(pr[i].first);
    }
    for (int val:remain){
        auto it=st.upper_bound(val-1);
        if (it!=st.end()){
            ans++;
            st.erase(it);
        }
    }
    // for (int i=0;i<remain.size();i++){
    //     ll temp=*i;
    //     auto it=st.upper_bound(temp-1);
    //     if (it!=remain.end()){
    //         ans++;
    //         remain.erase(it);
    //     }
    // }
    cout<<ans<<endl;
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