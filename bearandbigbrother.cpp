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
    int a,b,i=0;
    cin>>a>>b;
    int limak=a;
        int bob=b;
    while (1)
    {
        

        limak*=3;
         bob*=2;
        i++;
        if (limak>bob)
        break;
    }
    cout<<i<<endl;

    return 0;
}