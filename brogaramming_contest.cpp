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
    int x;
    cin>>x;
    while (x--)
    {
        int s,co=0,m=0;
        cin>>s;
        char arr[s];
        char arrs[s],arrt[s];
        for (int i=0;i<s;i++)
        {
            cin>>arr[i];
        }
        for (int i=0;i<s;i++)
        {
            if (arr[i]=='0')
            {
                arrs[i]=arr[i];
                m++;
                
            }else
            break;
        }
        for (int i=m;i<s;i++)
        {
            if (arr[i]==arr[i+1])

            {
                

            }else
            co++;
        }
        if (m==s)
        {
            cout<<'0'<<endl;
        }else
        {
            cout<<co<<endl;
        co=0;
        }
        
    }
    
    return 0;
}