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
    // x odd number odd need odd
    // x even number odd need even
    int x;cin>>x;vector<int>vv(x*2);
    int odd_c=0,even_c=0;
    for (int i=0;i<x*2;i++){
        cin>>vv[i];
        if (vv[i]%2!=0)odd_c++;
        else even_c++;
    }
    // sort(vv.begin(),vv.end());
    // int cnt=0;
    // for (int i=0;i<x*2-1;i++)
    // {
    //     if (vv[i]==vv[i+1])cnt++;
    //     else
    //     {
    //         if (cnt>1)
    //           {
    //             cout<<"No"<<endl;
    //          return;
    //         }else cnt=0;
    //     }
        
    // }
    // // cout<<cnt<<endl;
    // if (cnt>1)
    // {
    //     cout<<"No"<<endl;
    //     return;
    // }
    (odd_c==even_c)?cout<<"Yes"<<endl:cout<<"No"<<endl;
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