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
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main ()
{
    speed;
    int level;
    cin>>level;
    int arr[level];
    for (int i=0,cnt=1;i<level;i++)
    {
        arr[i]=cnt++;
    }
    set<int>s;
    int x;
    cin>>x;
    for (int i=0;i<x;i++)
    {
        int temp;
        cin>>temp;
        s.insert(temp);
    }
    int y;
    cin>>y;
    for (int i=0;i<y;i++)
    {
        int temp;
        cin>>temp;
        s.insert(temp);
    }
    bool flag=false;
    for (int i=0;i<level;i++)
    {
        if (s.find(arr[i]) != s.end())
        {
           flag= true;
        }else
        {
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    if (true)
    cout<<"I become the guy."<<endl;

    return 0;
}