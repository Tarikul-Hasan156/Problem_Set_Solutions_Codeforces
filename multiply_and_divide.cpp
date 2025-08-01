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
#define sp " "
#define forn(i, n) for (int i = 0; i < (n); i++)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define maxelementofvector *max_element(digit.begin(),digit.end());
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;

void solve ()
{
    int x;
    cin>>x;
    int cnt1=0,cnt2=0;
    while (x%2==0)
    {
        x/=2;
        cnt1++;
    }
    // cout<<"x : "<<x<<endl;
    while (x%3==0)
    {
        x/=3;
        cnt2++;
    }
    if (cnt1<=cnt2 && x==1)
    {
        cout<<(2*cnt2)-cnt1<<endl;
    }else 
    {
        cout<<-1<<endl;
    }
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