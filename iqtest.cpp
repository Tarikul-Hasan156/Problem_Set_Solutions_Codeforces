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
    int x;
    cin>>x;
    int arr[x];
    for (int i=1;i<=x;i++)
    {
        cin>>arr[i];
    }
    int even_index=0;
    int odd_index=0;
    int even_count=0;
    int odd_count=0;
    for (int i=1;i<=x;i++)
    {
        if (arr[i]%2==0)
        {
          
            even_count++;
            even_index=i;
        }
         if (arr[i]%2!=0 )
        {
            odd_count++;
            odd_index=i;
        }
    }
            // cout<<even_count<<endl;
            // cout<<odd_count<<endl;

    if (even_count>odd_count)
     cout<<odd_index<<endl;
     else
    cout<<even_index<<endl;
    return 0;
}