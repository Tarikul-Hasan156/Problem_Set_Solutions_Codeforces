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
#define maxelementofvector *max_element(digit.begin(),digit.end());
using namespace std;
int main ()
{
    speed;
    int c,sum=0;
    cin>>c;
    int arr1[c];
    int arr2[c];
    for (int i=0;i<c;i++)
    {
        cin>>arr1[i]>>arr2[i];
    }
    // for (int i=0;i<c;i++)
    // {
    //     cout<<arr2[i]<<endl;
    // }
    for (int i=0;i<c;i++)
    {
        for (int j=0;j<c;j++)
        {
            if (arr1[i]==arr2[j])
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}