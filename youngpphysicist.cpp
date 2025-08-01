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
    int m;
    cin>>m;
    
    int sumX=0,sumY=0,sumZ=0;
    for (int i=0;i<m;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        sumX+=x;
        sumY+=y;
        sumZ+=z;

    }
    if (sumZ==0 && sumX==0 && sumY==0)
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
    
    return 0;
}