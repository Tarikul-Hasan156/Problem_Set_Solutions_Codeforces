#include <bits/stdc++.h>
#include <string>
#include <sstream>
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
    string s1,s2;
    cin>>s1>>s2;
    uppertolowers1;
    uppertolowers2;

    if (s1==s2)
    cout<<"0"<<endl;
    else if (s1<s2)
    cout<<"-1"<<endl;
    else
    cout<<"1"<<endl;

    return 0;
}