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
   int x,y;
   cin>>x>>y;
   if (x==y)
   {
    cout<<x<<sp<<'0'<<endl;

   }
   else  if (x>y)
   {
        int remain =x-y;
        if (remain>1)
        {
            cout<<y<<sp<<remain/2<<endl;
        }else
        cout<<y<<sp<<'0'<<endl;
       
   }else
   {
        int remain = y-x;
        if (remain>1)
        {
            cout<<x<<sp<<remain/2<<endl;
        }else
        cout<<x<<sp<<'0'<<endl;

        
   }

    return 0;
}