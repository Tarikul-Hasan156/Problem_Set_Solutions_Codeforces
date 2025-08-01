#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include<set>
#include<cstring>
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
   ll int x,c=0,d=0;
    cin>>x;
    string s1;
    cin>>s1;
    for (int i=0;i<x;i++)
    {
        if (s1[i]=='A')
        c++;
        else
        d++;
    }
    if (c>d)
    cout<<"Anton"<<endl;
    else if (d>c)
    cout<<"Danik"<<endl;
    else
    cout<<"Friendship"<<endl;
    return 0;
}