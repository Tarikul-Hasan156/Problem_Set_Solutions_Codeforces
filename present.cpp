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
    int x;
    cin>>x;
    int arr2[x];
    int arr1[x];
    for (int i=1;i<=x;i++)
    {
        cin>>arr1[i];
    }
    for (int i=1;i<=x;i++)
    {
        int temp=arr1[i];
        // cout<<temp<<i<<endl;
        arr2[temp]=i;
        //  cout<<arr2[temp]<<sp;
    }
    for (int i=1;i<=x;i++)
    {
        cout<<arr2[i]<<sp;
    }
    
    return 0;
}