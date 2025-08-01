#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include<set>
#include<cstring>
#include<cctype> //islower () issuper () for check the first char
#include<algorithm>
#include<cmath>
#define substring s.find(s1)!=string::npos;
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
    string s;
    cin>>s;
   string s1="hello";
   int j=0;
   for (char c: s)
   {
         if (c==s1[j])
         {
            j++;
         }
         if (j==s1.size())
         {
            cout<<"YES"<<endl;
            return 0;
         }
         
   }
   cout<<"NO"<<endl;

   
    return 0;
}