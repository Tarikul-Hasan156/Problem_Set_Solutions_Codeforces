#include <bits/stdc++.h>
#include <string>
#include<cctype>
#include <sstream>
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
    string s;
    cin>>s;
    stringstream ss(s);
    string word;
    while(ss>>word)
    {
        if (islower(word[0]))   //is slower use to the first char of a string is lowercase or not also issupper use for uppercase
        {
            char x=word[0]-32;
       
        cout<<x;
        for (int i=1;i<word.length();i++)
        {
            cout<<word[i];
        }
        }else
        {
            cout<<word<<endl;
        }
        

     
       
    }
    return 0;
}
