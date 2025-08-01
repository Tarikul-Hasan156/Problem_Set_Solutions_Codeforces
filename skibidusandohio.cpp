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
    int x,sum=0;
    // bool c=true;
    cin>>x;
    while (x--)
    {
        string s;
        cin>>s;
        
        sum=0;
        for (int i=0;i<s.length();i++)
        {
            if (s[i]==s[i+1])
            {
                cout<<1<<endl;
                sum++;
                break;
            }
        }
        if (sum==0)
        cout<<s.length()<<endl;
       
    }
    return 0;
}