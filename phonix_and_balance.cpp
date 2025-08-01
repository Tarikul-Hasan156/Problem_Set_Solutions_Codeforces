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
    ll n;cin>>n;
    vector<ll>vv;
    for (int i=1;i<=n;i++)
    {
        ll temp=(1LL<<i);
        vv.push_back(temp);
    }
    // for (ll ch:vv)cout<<ch<<sp;
    // cout<<endl;
    // ll f_res=0,sec_res=0;
    ll  size=vv.size();
    // if (size==2)
    // {
    //     cout<<abs(vv[0]-vv[1])<<endl;
    //     return;
    // }
    // for (int i=0;i<(size/2)-1;i++)
    // {
    //     f_res+=vv[i];
    // }
    // for (int i=(size/2);i<size;i++)sec_res+=vv[i];
    // f_res+=vv.back();
    ll res=accumulate(vv.begin(),vv.end(),0LL);
        for (int i=size-1;i>=size/2;i--)
        {
            res-=vv[i];
        }
    cout<<res<<endl;
    // cout<<abs(f_res-sec_res)<<endl;
    
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