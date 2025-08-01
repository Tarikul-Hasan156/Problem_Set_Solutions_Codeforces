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
    ll int x,c=0;
    cin>>x;
    while (x>0)
    {
        int lastdigit=x%10;
        x/=10;
        if (lastdigit==4 || lastdigit==7)
        c++;
    }
    if (c==4 || c==7)
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
    
    
    return 0;
}