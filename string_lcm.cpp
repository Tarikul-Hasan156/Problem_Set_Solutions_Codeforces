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
    string s1,s2;cin>>s1>>s2;
    if (s1==s2){cout<<s1<<endl;return;}
    ll size1=s1.size(),size2=s2.size();
    ll lcm=(size1*size2)/__gcd(size1,size2);
    string temp1="",temp2="";
    for (int i=0;i<lcm/size1;i++)temp1+=s1;
    for (int i=0;i<lcm/size2;i++)temp2+=s2;
    if (temp1==temp2)cout<<temp1<<endl;
    else cout<<-1<<endl;
    // string temp1=s1,temp2=s2;
    // int size1=s1.size();
    // int size2=s2.size();
    // if ((s1[0]!=s2[0]) or (s1[size1-1]!=s2[size2-1])){cout<<-1<<endl;return;}
    // ll cnt=1e5;
    // while (s1!=s2 and cnt--)
    // {
    //     if (s1.size()<s2.size())s1+=temp1;
    //     else s2+=temp2;
    //     if (s1==s2){cout<<s1<<endl;return;}
    // }
    // cout<<-1<<endl;
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