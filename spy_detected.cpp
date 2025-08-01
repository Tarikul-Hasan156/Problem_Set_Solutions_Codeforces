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
using namespace std;
int main ()
{
    speed;
    int test,c=0;
    cin>>test;
    while ( test--)
    {
        
         int x;
         cin>>x;
         int arr[x];
         for( int i=1;i<=x;i++)cin>>arr[i];
        for (int i=2;i<=x;i++)
        {
            if (arr[i-1]==arr[i])
            continue;
            else
            {
                if (arr[i]==arr[i+1])
                {
                    cout<<i-1<<endl;
                break;
                }else
                {
                     cout<<i<<endl;
                     break;
                }
            }
        }
    }
    
    return 0;
}