#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include<set>
#include<iomanip>
#include<cstring>
#include<cctype> //islower () issuper () for check the first char
#include<algorithm>
#include<cmath>
#define sortarray sort(arr,arr+x);
#define rev reverse(s1.begin(), s1.end());
#define uppertolowers1 transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
#define uppertolowers2 transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define maxelementofvector *max_element(digit.begin(),digit.end());
using namespace std;
int main ()
{
    speed;
    int k,l,m,n;
    cin>>k>>l>>m>>n;
    int d,c=0;
    cin>>d;
    if (k==1||l==1||m==1||n==1)
    {
         cout<<d<<endl;
         return 0;
    }
   
    else
    {
         for (int i=1;i<=d;i++)
    {
        if (i%k==0 ||i%l==0 ||i%m==0 ||i%n==0)
        {
            if (c<=d)
            c++;
        }
        
    }
    }
    cout<<c<<endl;
   
    return 0;
}