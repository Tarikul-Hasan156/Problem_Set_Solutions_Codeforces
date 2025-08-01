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
    int n,t;
    cin>>n>>t;
    char arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while (t>0)
    {
        for (int i=0;i<n;i++)
        {
            if (arr[i]=='B' && arr[i+1]=='G')
            {
                swap(arr[i+1],arr[i]);
                i++;
            }
            
           
        }
        t--;
    }
    for (int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}