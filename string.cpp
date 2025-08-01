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
    string s1;
    cin>>s1;
   uppertolowers1;
    for (int i=0;i<s1.length();i++)
    {
        if (s1[i]=='a'||s1[i]=='e'||s1[i]=='o'||s1[i]=='i'||s1[i]=='u'||s1[i]=='y')
        continue;
        else
        cout<<"."<<s1[i];
    }


    return 0;
}