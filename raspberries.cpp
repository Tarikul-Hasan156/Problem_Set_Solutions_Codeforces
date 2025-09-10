//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
// #include <string>
// #include <sstream>
// #include<set>
// #include<iomanip>
// #include<cstring>
// #include<cctype> //islower () issuper () for check the first char
// #include<algorithm>
// #include<cmath>
#define sortarray sort(arr,arr+x);
// #define rev reverse(s1.begin(), s1.end());
// #define uppertolowers1 transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
// #define uppertolowers2 transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
// #define descsort sort(arr, arr + n, greater<int>());
#define sp " "
#define forn(i, n) for (int i = 0; i < (n); i++)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define maxelementofvector *max_element(digit.begin(),digit.end());
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void solve() {
    ll n,k;cin>>n>>k;
    vector<ll>vv(n);
    for(auto &x:vv)cin>>x;
    ll prod=1;
    for(int i=0;i<n;i++){
        prod=(prod*(vv[i]%k))%k;
        if(prod==0){
            cout<<0<<endl;
            return;
        }
    }
    if(k==2||k==3||k==5){
        ll ans=LLONG_MAX;
        for(int i=0;i<n;i++){
            ll rem=vv[i]%k;
            ll need=(rem==0?0:k-rem);
            ans=min(ans,need);
        }
        cout<<ans<<endl;
        return;
    }
    if(k==4){
        ll ans1=LLONG_MAX;
        vector<ll>c;
        for(int i=0;i<n;i++){
            ll rem4=vv[i]%4;
            ll cost4=(rem4==0?0:4-rem4);
            ans1=min(ans1,cost4);
            ll rem2=vv[i]%2;
            ll cost2=(rem2==0?0:2-rem2);
            c.push_back(cost2);
        }
        sort(c.begin(),c.end());
        ll ans2=c[0]+c[1];
        cout<<min(ans1,ans2)<<endl;
        return;
    }
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