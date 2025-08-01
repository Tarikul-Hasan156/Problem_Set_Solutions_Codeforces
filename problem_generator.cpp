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
    int n,m;cin>>n>>m;
    string s;cin>>s;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0;
    for (int i=0;i<n;i++)
    {
        if (s[i]=='A')a++;
        else if (s[i]=='B')b++;
        else if (s[i]=='C')c++;
        else if (s[i]=='D')d++;
        else if (s[i]=='E')e++;
        else if (s[i]=='F')f++;
        else g++;
    }
    ll cnt=0;
    if (a<m)cnt+=m-a;
    if (b<m)cnt+=m-b;
    if (c<m)cnt+=m-c;
    if (d<m)cnt+=m-d;
    if (e<m)cnt+=m-e;
    if (f<m)cnt+=m-f;
    if (g<m)cnt+=m-g;
    cout<<cnt<<endl;


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