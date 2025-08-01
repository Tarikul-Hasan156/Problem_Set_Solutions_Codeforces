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
   int temp=0;
   int arr[5]={0};
   int x;
    cin>>x;
   for (int i=0;i<x;i++)
   {
        cin>>temp;
        arr[temp]++;

   }
   int taxi=0;
   taxi+=arr[4];
//    cout<<taxi<<endl;
   taxi+=arr[3];
   arr[1]-=arr[3];
   if (arr[1]<0)
   {
   arr[1]=0;

   }
   taxi+=arr[2]/2;
   if (arr[2]%2==0)
   {
   arr[2]=0;

   }
   else
   {
   arr[2]=1;

   }
   arr[1]+=arr[2]*2;
   if (arr[1]%4==0)
   taxi+=arr[1]/4;
   else
   {
   taxi+=(arr[1]/4)+1;

   }
   cout<<taxi<<endl;
    return 0;
}