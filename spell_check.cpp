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
    int x;
    int cntt=0,cnti=0,cntm=0,cntu=0,cntr=0,diff=0;
    cin>>x;
   
        for (int i=0;i<x;i++)
        {
            char temp;
            cin>>temp;
            if (temp=='T')
            {
                cntt++;
            }else if (temp=='i')
            {
                cnti++;
            }else if (temp=='m')
            {           
                cntm++;
            }else if (temp=='u')
            {
                cntu++;
            }else if (temp=='r')
            {
                cntr++;
            }else 
            {
                diff++;
            }
        }
        if (cntt==1 && cntr==1 && cnti==1 && cntm==1 && cntu==1 && diff==0)
        {
            yes;
        }else 
        {
            no;
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