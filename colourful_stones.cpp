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
bool check(string s,char ch)
{
    return s.find(ch)!=string ::npos;
}
void solve ()
{
    string s1,s2;cin>>s1>>s2;
    ll temp=0,ans=0;
    if (!check(s2,s1[0]))
    {
        cout<<1<<endl;
        return;
    }
    for (int i=0;i<s1.length();)
    {
         bool ok=false;
        for (int j=temp;j<s2.length();j++)
        {
            if (s1[i]==s2[j])
            {
                ok=true;
                i++;
                temp=j+1;
                ans=i;
                  break;
            }
            
        }
        if (!ok)break;
    }
    if (ans==s1.length())
    {
        cout<<ans<<endl;
    }else
    {
        cout<<ans+1<<endl;
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