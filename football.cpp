#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include<set>
#include<cstring>
#include<cctype> //islower () issuper () for check the first char
#include<algorithm>
#include<cmath>
#define uppertolowers1 transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
#define uppertolowers2 transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main ()
{
    speed;
    int c=0,temp=0,one=0,two=0;
   string s1;
   cin>>s1;
    for (int i=0;i<s1.length();i++)
    {
        if (s1[i]=='0')
        {
            c++;
           
        }else
        {
            c=0;
        }
        if (s1[i]=='1')
        {
            one++;
            
            
        }else 
        one=0;
        if (c==7 || one==7)
        {
           
            
            temp=7;
            break;
            
        }
    }
    if (temp==7)
     cout<<"YES"<<endl;
     else
    cout<<"NO"<<endl;
    
    
    return 0;
}