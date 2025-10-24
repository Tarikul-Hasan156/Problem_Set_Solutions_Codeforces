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
void solve ()
{
   ll n,m;cin>>n>>m;
    vector<vector<ll>>v;
    vector<ll>cnt(m,0);
    ll t=0;
    for(int i=0;i<n;i++){
        ll l;cin>>l;
        v.push_back({});
        for(int j=0;j<l;j++){
            ll x;cin>>x;
            x--;
            t+=!cnt[x];
            cnt[x]++;
            v[i].push_back(x);
        }
    }
    ll ans=t==m;
    for(int i=0;i<n;i++){
        for(ll x:v[i]){
            cnt[x]--;
            t-=!cnt[x];
        }
        ans+=t==m;
        for(ll x:v[i]){
            t+=!cnt[x];
            cnt[x]++;
        }
    }
    if (ans>=3){cout<<"YES"<<endl;return;}
//    for (int i=0;i<last.size()-1;i++){
//     for (int j=i+1;j<last.size();j++){
//         last[i].insert(last[i+1].begin(),last[i+1].end());
//         if (last[i].size()==m)cnt++;
//         if (cnt==3){
//             cout<<"YES"<<endl;
//             return;
//         }
//     }
//    }
   cout<<"NO"<<endl;
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