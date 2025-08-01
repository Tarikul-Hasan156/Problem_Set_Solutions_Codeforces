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
    ll int x;
    cin>>x;
    int sum=0;
    int m=0;
    if (x>=100)
    {
        sum+=x/100;
    x=x%100;
    } if (x>=20)
    {

         sum+=x/20;
    x=x%20;
    } if (x>=10)
    {
         sum+=x/10;
    x=x%10;
    } if (x>=5)
    {
         sum+=x/5;
    x=x%5;
    }if (x>=1) 
    {
        sum+=x;
    }
    cout<<sum<<endl;
    

    return 0;
}