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
    string s1,s2,s3,s4;
   cin>>s1>>s2>>s3;
   s4=s1+s2;
   sort (s4.begin(),s4.end());
   sort(s3.begin(),s3.end());
   if (s4==s3)
   {
    cout<<"YES"<<endl;
    
   }else
   {
    cout<<"NO"<<endl;
   }
    
    return 0;
}