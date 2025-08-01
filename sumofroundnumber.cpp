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
    while (x--)
    {
        int c;
        cin>>c;
        int arr[6]; // { 0 5 0 0 9 }
        int total=0,m=1;
        for (int i=1;i<6;i++)
        {
            arr[i]=c%10;
            c/=10;
            if (arr[i]!=0)
            total++;
        }
        cout<<total<<endl;
    for (int i=1;i<6;i++)
    {
        if (arr[i]!=0){
            cout<<arr[i]*m<<sp;

        }
      
        m*=10;
    }
    cout<<endl;
    }
    
    return 0;
}