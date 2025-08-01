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
     int m,n;
     cin>>m>>n;
     vector<int>arr;
     int cnt=0;
     for (int i=0;i<m;i++)
     {
        int temp;
        cin>>temp;
        if (temp<0)
        {
            arr.push_back(temp);
            cnt++;
        }
     }
     sort(arr.begin(),arr.end());
     int result=0;
     for (int i=0;i<n && i < arr.size();i++)
     {
        result+=abs(arr[i]);
     }
     cout<<result<<endl;
     
    return 0;
}