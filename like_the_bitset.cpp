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
    ll x,k;cin>>x>>k;
    string s;cin>>s;
    ll cnt=0;
    for (int i=0;i<x;i++)
    {
        if (s[i]=='1'){
            cnt++;
            if (cnt==k){cout<<"NO"<<endl;return;}
        }else cnt=0;
        
    }
    vector<ll>vv;
    ll mx=x,mn=1;
    for (int i=0;i<x;i++) 

    {
        if (s[i]=='0')vv.push_back(mx--);
        else vv.push_back(mn++);
    }
    cout<<"YES"<<endl;
    for (auto &x:vv)cout<<x<<sp;
    cout<<endl;
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