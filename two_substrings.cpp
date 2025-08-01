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
bool check (string s,string s1)
{
    return s.find(s1)!=string::npos;
}
void solve ()
{
    string s;cin>>s;
    string temp1="AB",temp2="BA",temp3="ABA",temp4="BAB",temp5="ABAB",temp6="BABA";
    ll cnt1=0,cnt2=0,pos=0;
    while ((pos=s.find(temp1,pos))!=string ::npos)
    {
        pos++;
        cnt1++;
    }
    pos=0;
    while ((pos=s.find(temp2,pos))!=string ::npos)
    {
        pos++;
        cnt2++;
    }
    ll size=s.length();
     if ((cnt1==1 && cnt2==1 && check(s,temp3)) ||(cnt1==1 && cnt2==1 && check(s,temp4))  || ( cnt1==2 && cnt2==1 && check(s,temp5)) || (cnt1==1 && cnt2==2 && check(s,temp6)))
     {
        no;
     }else if (cnt1>0 && cnt2>0)
     {
        yes;
     }else
     {
        no;
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