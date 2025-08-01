#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include<set>
#include<cctype> //islower () issuper () for check the first char
#include<algorithm>
#include<cmath>
#define lowertouppers1 transform(s1.begin(), s1.end(), s1.begin(), ::toupper); 
#define uppertolowers1 transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
#define uppertolowers2 transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main ()
{
    speed;
    int lc=0,uc=0;
    string s1;
    cin>>s1;
    for (int i=0;i<s1.length();i++)
    {
        if (islower(s1[i]))
        lc++;
        else 
        uc++;

    }
    if ((lc==uc) || (lc>uc))
    {
        uppertolowers1;
        cout<<s1;
    }
    

    else {
lowertouppers1;
cout<<s1;
    }
   
   

    return 0;
}