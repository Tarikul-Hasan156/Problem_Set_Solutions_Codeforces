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
bool year (int x)
{
    vector<int>s;
    while(x>0)
    {
        int last=x%10;
        if (find(s.begin(),s.end(),last)!=s.end())
        return true;

        s.push_back(last);
        x/=10;

    }
    return false;
    
}
int uniqueyear(int x)
{
    x++;
    while (year(x))
    {
        x++;
    }
    return x;
}
int main ()
{
    speed;
    int x;
    cin>>x;
    cout<<uniqueyear(x)<<endl;
    return 0;
}