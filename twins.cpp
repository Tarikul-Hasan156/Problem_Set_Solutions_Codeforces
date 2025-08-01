#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include<set>
#include<cstring>
#include<cctype> //islower () issuper () for check the first char
#include<algorithm>
#include<cmath>
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
    int c=0;
    int x;
    int result=0,second=0;
    cin>>x;
    int arr[x];
    for (int i=0;i<x;i++)
   {
        cin>>arr[i];
   }
   sort(arr,arr+x);
  for (int i=x-1;i>=0;i--)
  {
    result+=arr[i];
    for (int j=i-1;j>=0;j--)
    {
        second+=arr[j];
    }
    c++;
    // cout<<c<<endl;
    if (result>second)
    {
        
        cout<<c<<endl;
        break;
        return 0;
    }
    second=0;
    
  }
//   cout<<c<<endl;
   
    return 0;
}