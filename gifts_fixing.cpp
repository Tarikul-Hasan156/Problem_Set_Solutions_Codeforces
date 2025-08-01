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
    int n;cin>>n;
    vector<int>vv(n),temp1(n),temp2(n),v(n);
    for (int i=0;i<n;i++)cin>>vv[i];
    for (int i=0;i<n;i++)cin>>v[i];
    temp1=vv;
    temp2=v;
    sort(vv.begin(),vv.end());
    sort(v.begin(),v.end());
    ll cnt=0;
    if (vv[0]==vv[n-1] && v[0]==v[n-1])cout<<0<<endl;
    else if (vv[0]==vv[n-1])
    {
        int mn=*min_element(v.begin(),v.end());
        for (int i=0;i<n;i++)
        {
           cnt+=abs(v[i]-mn);
        }
        cout <<cnt<<endl;
        return;
    }else if (v[0]==v[n-1])
    {
        int mn=*min_element(vv.begin(),vv.end());
        for (int i=0;i<n;i++)
        {
           cnt+=abs(vv[i]-mn);
        }
        cout <<cnt<<endl;
        return;
    }else
    {
        int mn1=*min_element(temp1.begin(),temp1.end());
        int mn2=*min_element(temp2.begin(),temp2.end());
        for (int i=0;i<n;i++)
        {
            int diff=abs(mn1-temp1[i]);//3
            cnt+=diff;//2
            // cout<<cnt<<endl;
            if (temp2[i]!=mn2)
            {
                int diff2=abs(mn2-temp2[i]);//1
                if (diff2>=diff)temp2[i]-=diff;//3>2 
                else temp2[i]-=diff2;
            }
        }
        for (int i=0;i<n;i++)
        {
            cnt+=abs(mn2-temp2[i]);
        }
        cout<<cnt<<endl;
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