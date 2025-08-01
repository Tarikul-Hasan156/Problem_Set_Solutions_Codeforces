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
    ll int n,k;
    cin>>n>>k;
    
    for (int i=0;i<k;i++)
    {
        int lastdigit=(n%10);
        
        // cout<<n<<sp<<lastdigit<<endl;
        
        
        if (lastdigit==0)
        {
            n=n/10;
        }
        else
        n=n-1;
    }   
    cout<<n<<endl;


    return 0;
}