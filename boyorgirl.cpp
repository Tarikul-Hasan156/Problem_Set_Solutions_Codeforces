#include <bits/stdc++.h>
#include <string>
#include <sstream>
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
    string s;
    cin>>s;
    int length =s.length();
    // cout<<length<<endl;
    stringstream ss(s);
    string word;
    int c=0;
    // string final= "";
    while(ss>>word)
    {   
        for (int i=0;i<word.length();i++)

        {
            bool is_unique=true;
            
            for (int j=i+1;j<word.length();j++)
            {
                if (word[i]==word[j])
                is_unique=false;
             
            }
            if (is_unique)
            c++;
            
        }
        
    }
    // length=abs(length);
    // cout<<length<<endl;
    if (c%2==0)
    cout<<"CHAT WITH HER!"<<endl;
    else
    cout<<"IGNORE HIM!"<<endl;
    


    return 0;
}