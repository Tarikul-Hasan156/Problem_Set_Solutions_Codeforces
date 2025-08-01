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
    ll n,q;cin>>n>>q;
    vector<ll>vv(n);
    for (int i=0;i<n;i++)cin>>vv[i];
    ll total_sum=accumulate(vv.begin(),vv.end(),0LL);
    vector<ll>pref(n +1,0);
    for (int i=0;i<n;++i)pref[i+1]=pref[i]+vv[i];
    while(q--)
    {
        ll l,r,k;cin>>l>>r>>k;
        ll temp=(r-l-1)*k;
    ll block_sum = pref[r] - pref[l-1];
        ll res=total_sum-block_sum+temp;
        (res%2!=0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
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