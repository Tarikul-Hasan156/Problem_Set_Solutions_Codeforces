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
bool check(string s,string s1)
{
    return s.find(s1)!=string::npos;
}
bool check1(string s,string s1)
{
    return s1.find(s)!=string::npos;
}
void solve ()
{
    int x,y;cin>>x>>y;
    string s,s1;cin>>s>>s1;
    if (s==s1)
    {
        cout<<0<<endl;
        return;
    }
    ll cnt=0;
    ll mx=6;
    while (mx--)
    {
        
        if (check(s,s1))
        {
            cout<<cnt<<endl;
            return;
        }
        s+=s;
        // cout<<s<<endl;
        x=s.length();
        // cout<<x<<endl;
        cnt++;
    }
    cout<<-1<<endl;
    
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