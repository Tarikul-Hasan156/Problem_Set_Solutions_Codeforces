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
    string s;cin>>s;
    ll size=s.length();
    if (size==2 || size==3){cout<<s<<endl;return;}
    if (size&1)
    {
        ll cnt=0;
        for (int i=0;i<size-3;i++)
        {
            if (cnt==2){cout<<"-";cnt=0;}
            cout<<s[i];
            cnt++;
        }
        cout<<"-";
        for (int i=size-3;i<size;i++)cout<<s[i];
        cout<<endl;
    }else
    {
        ll cnt=0;
        for (int i=0;i<size;i++)
        {
            if (cnt==2){cout<<"-";cnt=0;}
            cout<<s[i];
            cnt++;
        }
        cout<<endl;
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