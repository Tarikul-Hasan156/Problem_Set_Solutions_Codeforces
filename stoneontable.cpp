#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include<set>
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
    int x;
    int c=0;
    cin>>x;
    char arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<x;i++)
    {
        if (arr[i]==arr[i+1])
        c++;
    }
    cout<<c<<endl;
   
    
    return 0;
}