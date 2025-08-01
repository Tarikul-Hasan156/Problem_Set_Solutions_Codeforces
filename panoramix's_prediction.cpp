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
    int n,m;
    cin>>n>>m;
    bool flag=false;
    for ( int i=n+1;i<=m;i++)
    {
        int cnt=0;
        for (int j=1;j<=m;j++)
        {
            if (i%j==0)
            {
                cnt++;
            }
        }
       
        if (cnt==2 && i==m)
        {
          yes;
          return 0;
        }else if (cnt==2 && i!=m)
        {
            no;
            return 0;
        }
    }
    no;
   
    return 0;
}