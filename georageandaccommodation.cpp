#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include<set>
#include<cstring>
#include<cctype> //islower () issuper () for check the first char
#include<algorithm>
#include<cmath>
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
    int n,already,capacity,c=0;
    cin>>n;
    while (n--)

    {
        cin>>already>>capacity;
        int result=(capacity-already);
        if (result>=2)
        c++;
        
    }
    cout<<c<<endl;
    return 0;
}