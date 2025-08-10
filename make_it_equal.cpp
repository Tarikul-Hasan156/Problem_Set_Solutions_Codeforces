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
    ll x,temp;cin>>x>>temp;
    vector<ll>temp1(x),temp2(x);
    for (auto &x:temp1)cin>>x;
    for (auto &x:temp2)cin>>x;
    for (int i=0;i<x;i++)
    {
        temp1[i]%=temp;temp2[i]%=temp;
        temp1[i]=min(temp1[i],temp-temp1[i]);
        temp2[i]=min(temp2[i],temp-temp2[i]);
    }
    sort(temp1.begin(),temp1.end());
    sort(temp2.begin(),temp2.end());
    if (temp2==temp1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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