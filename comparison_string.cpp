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
    string temp=s;
    sort(temp.begin(),temp.end());
    if (temp[0]==temp[x-1]){cout<<x+1<<endl;return;}
    // vector<int>res;
    ll first=INT_MIN,second=INT_MIN,cnt1=0,cnt2=0;
    for (int i=0;i<x;i++)
    {
        if (s[i]=='<')
        {
            cnt1++;
            if (cnt1>first)
            {
                first=cnt1;
            }
            cnt2=0;
        }else
        {
            cnt2++;
            if (cnt2>second)
            {
                second=cnt2;
            }
            cnt1=0;
        }
    }
    ll mx=max(first,second);
    cout<<mx+1<<endl;
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