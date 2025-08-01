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
using namespace std;
int main ()
{
    speed;
    ll int x;
    cin>>x;
    while (x--)
    {
        int n,m=0;
        cin>>n;
      if (n==0)
      cout<<"Counterfeit."<<endl;
      else
      {
        for (int i=0;i<3;i++)
        {
            int result=n/10;
            n%=10;
            if (result==0)
            {
                m++;
            }
        }
        if(m==0)
        cout<<"Ekok."<<endl;
        else if (m==1)
        cout<<"Dashok."<<endl;
        else if (m==2)
        cout<<"Shatak."<<endl;
        else 
        cout<<"Counterfeit."<<endl;
      }
    }
    
   
    return 0;
}