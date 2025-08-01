#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include<set>
#include<iomanip>
#include<cstring>
#include<cctype> //islower () issuper () for check the first char
#include<algorithm>
#include<cmath>
#define sortarray sort(arr,arr+x);
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
    int x;
    cin>>x;
    if (x==1)
    cout<<"I hate it"<<endl;
    else 
    {
        cout<<"I hate";
        for (int i=2;i<=x;i++)
        {
            if (i%2==0)
            cout<<" that I love";
            else 
            cout<<" that I hate";
        }
        cout<<" it";
    }
}