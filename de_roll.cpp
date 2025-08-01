#include <bits/stdc++.h>
// #include <string>
// #include <sstream>
// #include<set>
// #include<iomanip>
// #include<cstring>
// #include<cctype> //islower () issuper () for check the first char
// #include<algorithm>
// #include<cmath>
#define sortarray sort(arr,arr+x);
// #define rev reverse(s1.begin(), s1.end());
// #define uppertolowers1 transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
// #define uppertolowers2 transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
#define sp " "
#define forn(i, n) for (int i = 0; i < (n); i++)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define maxelementofvector *max_element(digit.begin(),digit.end());
using namespace std;
int main ()
{
    speed;
    int a,b;
    cin>>a>>b;
    int result=max({a,b});
    if (result==1)
    cout<<"1/1"<<endl;
    else if (result==2)
    cout<<"5/6"<<endl;
    else if (result==3)
    cout<<"2/3"<<endl;
    else if (result==4)
    cout<<"1/2"<<endl;
    else if (result==5)
    cout<<"1/3"<<endl;
    else 
    cout<<"1/6"<<endl;

    


    return 0;
}