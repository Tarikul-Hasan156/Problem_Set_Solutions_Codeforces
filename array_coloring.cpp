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
bool flag=false;
void solve ()
{
     int x;
     cin>>x;
     int arr[x];
    for (int i=0;i<x;i++)cin>>arr[i];
    // for (int i=0;i<x;i++)cout<<arr[i]<<sp;
    // cout<<endl;
    sort (arr,arr+x,greater<int>());
    // for (int i=0;i<x;i++)cout<<arr[i]<<sp;
    int sum1=0;
    for (int i=0;i<x;i++)
    {
         int sum2=0;

        sum1+=arr[i];
        sum2+=accumulate(arr+(i+1),arr+x,0);
        // cout<<sum1<<sp<<sum2<<endl;
        if (sum2==1)
        sum2+=2;
        if ((sum1%2==0 && sum2%2==0) || (sum1%2!=0 && sum2%2!=0))
        flag=true;
        else
        flag=false;

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
        if (flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}