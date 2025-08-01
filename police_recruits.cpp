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
    int c,temp=0;
    cin>>c;
    int arr[c];
    int crime=0,hire=0;
    forn(i,c)cin>>arr[i];
    forn (i,c)
    {
        if (arr[i]<0)
        {
            crime++;
            if (hire==crime)
            {
                hire=0;
                crime=0;
            }else if (hire>crime)
            {
                hire-=crime;
                crime=0;
            }else
            {
                temp+=crime;
                crime=0;
            }
        }else
        {
            if (crime>hire)
            {
                temp+=crime;
                crime=0;
            }
            hire+=arr[i];
            
        }
    }
    cout<<temp<<endl;
    return 0;
}