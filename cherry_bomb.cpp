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
int main ()
{
    speed;
    int tt;
    cin>>tt;
    while (tt--)
    {
        int n,k;
        cin>>n>>k;
        int ar[n],arr[n];
        int l = 0, r = 2 * k;
        for (int i=0;i<n;i++)
        {
            cin>>ar[i];
            l=max(l,ar[i]);
            r=min(r,ar[i]+k);
        }
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (arr[i]!= -1)

            {
                l=max(l,ar[i]+arr[i]);
                r=min(r,ar[i]+arr[i]);
            }
          
        }
        cout<<max(0,r-l+1)<<endl;
    }

    return 0;
}