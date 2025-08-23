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
    ll x;cin>>x;
    ll first=0,second=0;
    vector<ll>vv(x);
    for (auto &x:vv)cin>>x;
    sort(vv.begin(),vv.end());
    if ((vv[0]+vv[x-1])%2==0){cout<<"0"<<endl;return;}
    // if (vv[0]%2==0 || vv[x-1]%2==0){cout<<"1"<<endl;return;}
   if (vv[0]%2==0)
   {
        for (int i=x-1;i>=0;i--)
        {
            if (vv[i]%2==0)break;
            else first++;
        }
   }
   else if (vv[0]&1)
   {
        for (int i=x-1;i>=0;i--){
            if (vv[i]&1)break;
            else first++;
        }
   }
   if (vv[x-1]%2==0)
   {
        for (int i=0;i<x;i++)
        {
            if (vv[i]%2==0)break;
            else second++;
        }
   }else if (vv[x-1]&1)
   {
        for (int i=0;i<x;i++)
        {
            if (vv[i]&1)break;
            else second++;
        }
   }
   if (first>=second)cout<<second<<endl;
   else cout<<first<<endl;
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