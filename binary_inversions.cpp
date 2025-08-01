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
    ll n,cnt=0;
    cin>>n;
    vector<int>vv(n);
    for (int i=0;i<n;i++ )cin>>vv[i];
    sort(vv.begin(),vv.end(),greater<int>());
    int sum=accumulate(vv.begin(),vv.end(),0);
    if ((sum==0 && n==2) || (sum==n && n==2))
    cout<<1<<endl;
    else if ((sum==0 && n>2) || (sum==n && n>2))
    cout<<n-1<<endl;
    else 
    {
        // for  (int ch: vv)cout<<ch<<sp;
        // cout<<endl;
        for (int i=0;i<n;i++)
        {
            if (vv[i]==1)
            cnt++;
            else
            break;
           
            
        }
        // cnt++;
        ll int zero=n-cnt;
        // cout<<"Zero : "<<zero<<sp<<"CNT : "<<cnt<<endl;

        cout<<(zero*cnt)-(cnt-1)<<endl;
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