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
    ll x,y;cin>>x>>y;
    vector<ll>vv(x);
    for (auto &x:vv)cin>>x;
    ll temp;cin>>temp;
    if (is_sorted(vv.begin(),vv.end())){cout<<"YES"<<endl;return;}
    for (int i=0;i<vv.size();i++)
    {
       ll mn=min(vv[i],temp-vv[i]);
       if (i>0)
       {
            if (mn>=vv[i-1])vv[i]=mn;
            else vv[i]=max(vv[i],temp-vv[i]);
       }else vv[i]=mn;
    }
    // for (auto &x:vv)cout<<x<<sp;cout<<endl;
    if (is_sorted(vv.begin(),vv.end()))cout<<"YES"<<endl;
    else
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