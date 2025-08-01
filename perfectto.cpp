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
bool isperfect(int x)
{
    if (x<0)
    return false;
    else
    {
        int s=sqrt(x);
        return s*s==x;
    }
}
int main ()
{
    speed;
    int c,co=0;
    while (cin>>c)
    {

        int num;
        cin>>num;
        if (num==1)
        {
            cout<<"-1"<<endl;

        }else
        {
            for (int i=2;i<=num;i++)
        {
            int sum=0;
            sum+=i;
            if (isperfect(sum))
            {
            cout<<i<<sp;
            co++;

            }
            
            

        }
        if (co==0)
        cout<<"-1"<<endl;
        }
        
    }
   
    return 0;
}