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
#define ll int64_t
#define maxelementofvector *max_element(digit.begin(),digit.end());
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void solve ()
{
    int x;cin>>x;vector<int>vv(x),temp(x);for (int i=0;i<x;i++)cin>>vv[i];
    auto it=max_element(vv.begin(),vv.end());
    int max_i=distance(vv.begin(),it);
    auto ti=min_element(vv.begin(),vv.end());
    int min_i=distance(vv.begin(),ti);
     temp=vv;
    sort(temp.rbegin(),temp.rend());
    if (temp==vv)
    {
        cout<<0<<endl;
        return;
    }
    max_i+=1;
    for (int i=0;i<x;i++)
    {
        if (vv[min_i]==vv[i])min_i=i;
    }
    min_i+=1;
    // cout<<max_i<<sp<<min_i<<endl;
    if ( max_i<min_i)cout<<(max_i-1)+(x-min_i)<<endl;
    else 
    {
        if (x==2)
        {
            cout<<1<<endl;
        }
        else
        {
            int res=(max_i-1)+(x-min_i);
            cout<<res-1<<endl;
        }
    }
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