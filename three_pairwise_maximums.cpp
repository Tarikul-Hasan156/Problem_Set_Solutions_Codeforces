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
     ll x,y,z;cin>>x>>y>>z;
     vector<ll>s;
     s.push_back(x);
     s.push_back(y);
     s.push_back(z);
     sort(s.begin(),s.end());
     if (s[2]>s[1] && s[2]>s[0])
     {
        cout<<"NO"<<endl;
        return;
     }
     if (s[0]==s[2])
     {
        cout<<"YES"<<endl;
        cout<<s[0]<<sp<<s[1]<<sp<<s[2]<<endl;
        return;
     }
      cout<<"YES"<<endl;
      cout<<s[2]<<sp<<s[0]<<sp<<1<<endl;
     
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