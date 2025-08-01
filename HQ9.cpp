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
using namespace std;
int main ()
{
    speed;
    string s1;
    int c=0;
    cin>>s1;
    for (int i=0;i<s1.length();i++)
    {
        // cout<<s1[i]<<endl;
        if (s1[i]=='H' || s1[i]=='Q' || s1[i]=='9' ){
            c++;
       
        }
       
        // else{
        //     cout<<"NO"<<endl;
        //     break;
        // }        
    }
    if (c>0)
    {
        cout<<"YES"<<endl;

    }else
    cout<<"NO"<<endl;
    return 0;
}