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
    int mishaka=0,chis=0;
    int tt;
    cin>>tt;
    while (tt--)
    {
        int  a,b;
        cin>>a>>b;
         if (a>b)
         mishaka++;
         else if (b>a)
         chis++;

        
        
    }
    // cout<<mishaka<<sp<<chis<<endl;
    if (mishaka==chis)
    cout<<"Friendship is magic!^^"<<endl;
    else if (mishaka>chis)
    cout<<"Mishka"<<endl;
    else
    cout<<"Chris"<<endl;
    
    return 0;
}