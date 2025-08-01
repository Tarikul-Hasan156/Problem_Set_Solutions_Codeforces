//বিসমিল্লাহির রহমানির রহিম (بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ)
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
#define ll long long
#define maxelementofvector *max_element(digit.begin(),digit.end());
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void solve ()
{
    int x;cin>>x;
    vector<int64_t>vv(x),final;int cnt=0;
    for (int i=0;i<x;i++)cin>>vv[i];
    if (x==1)
    {
        cout<<1<<endl;
        return;
    }
    for (int i=0;i<x-1;i++)
    {
        (vv[i]<vv[i+1])?cnt++:(final.push_back(cnt+1),cnt=0);
    }
    if (cnt!=0)
    final.push_back(cnt+1);
    // for (int ch:final)cout<<ch<<sp;
    // cout<<endl;
    int res=*max_element(final.begin(),final.end());
    (res==0)?cout<<1<<endl:cout<<res<<endl;
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