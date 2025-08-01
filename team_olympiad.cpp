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
    int x;
    int pr=0,ma=0,py=0;
    cin>>x;
    int arr[x];
    int arr1[x],arr2[x],arr3[x];
    for (int i=1;i<=x;i++)cin>>arr[i];
    for (int i=1;i<=x;i++)
    {
        if (arr[i]==1)
        {
            pr++;
            arr1[pr]=i;
        }else if (arr[i]==2)
        {
            ma++;
            arr2[ma]=i;

        }else
        {
        py++;
        arr3[py]=i;

        }
    }
     int Min=min({pr,ma,py});
     cout<<Min<<endl;
     for (int i=1;i<=Min;i++)
     {
            cout<<arr1[i]<<sp<<arr2[i]<<sp<<arr3[i]<<endl;
     }
    return 0;
}