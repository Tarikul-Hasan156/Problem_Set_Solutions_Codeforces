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
    ll x,l;cin>>x>>l;
    vector<double>vv(x);
    for (auto &x:vv)cin>>x;
    sort(vv.begin(),vv.end());
     double mx=INT_MIN*1.0;
   for (int i=0;i<x-1;i++)
   {
        if (vv[i+1]-vv[i]>mx)mx=vv[i+1]-vv[i];
   }
   double mn=*min_element(vv.begin(),vv.end());
   double Max=*max_element(vv.begin(),vv.end());
   double res=max(mn,l-Max);
   if (res>(mx/2))
   {
        cout<<fixed<<res<<endl;
        return;
   }
//    if ((mn)>(mx/2))
//    {
//         cout<<fixed<<(double)mn<<endl;
//         return;
//    }
//    if (l-Max>(mx/2))
//    {
//         cout<<fixed<<(double)l-Max<<endl;
//         return;
//    }
   cout<<fixed<<(double)mx/2<<endl;
}
int main ()
{
    speed;
    // int tt;
    // cin>>tt;
    // while (tt--)
    // {
        solve ();
    // }
    return 0;
}