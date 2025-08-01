#include <bits/stdc++.h>
// #include <string>
// #include <sstream>
// #include<set>
// #include<iomanip>
// #include<cstring>
// #include<cctype> //islower () issuper () for check the first char
// #include<algorithm>
// #include<cmath>
// #define sortarray sort(arr,arr+x);
// #define rev reverse(s1.begin(), s1.end());
// #define uppertolowers1 transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
// #define uppertolowers2 transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
#define sp " "
#define forn(i, n) for (int i = 0; i < (n); i++)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
// #define maxelementofvector *max_element(digit.begin(),digit.end());
using namespace std;
int main ()
{
    speed;
    int k,r;
    cin>>k>>r;
    bool con=true;
    int i=1;
    while (con)
    {
        int temp=k*i;


        int result=temp%10;
        if (result==0)
        {
            cout<<i<<endl;
            con=false;
        }else if (result==r)
        {
            cout<<i<<endl;
            con=false;

        }else
        {
            i++;
           

            // cout<<k<<sp<<i<<endl;
            

        }
    }
    return 0;
}