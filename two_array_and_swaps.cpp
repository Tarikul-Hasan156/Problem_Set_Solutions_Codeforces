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
#define ll long long
#define maxelementofvector *max_element(digit.begin(),digit.end());
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void solve ()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n),vv(n);
    for (int i=0;i<n;i++)cin>>v[i];
    for (int i=0;i<n;i++)cin>>vv[i];
    sort(vv.rbegin(),vv.rend());
    // for (int ch: vv)cout<<ch<<sp;
    // cout<<endl;
    sort(v.begin(),v.end());
    for (int i=0;i<k;i++)
    { 
        if (vv[i]>v[i])swap(v[i],vv[i]);
        
       
    }
    int result=accumulate(v.begin(),v.end(),0);
    cout<<result<<endl;
    
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