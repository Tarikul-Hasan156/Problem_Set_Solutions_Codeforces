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
   
    int c;
    cin>>c;
    while (c--)

    {
        string s;
        cin>>s;
    int sum1=0,sum2=0;

        int i=0;
        for  (char ch : s)
        {
            if (i<3){
                sum1+=ch - '0';
                i++;
                // cout<<"sum1 : "<<sum1<<endl;
            }
            else{
                sum2+=ch - '0';
                i++;
                // cout<<"sum2 : "<<sum2<<endl;

            }
        }
        if (sum1==sum2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}