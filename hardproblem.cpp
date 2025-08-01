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
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int sum=0;
        int remain=0;
    if (m>0)
    {
        if (m>a)
        sum+=a;
        else 
        sum+=m;
        if (m>b)
        sum+=b;
        else
        sum+=m;

        int remain_a=m-a;

        
            if (remain_a>0)
           {
                 remain_a=m-a;
            // cout<<"remain_a:"<<remain_a<<endl;
           }
            else 
            remain_a=0;
        int remain_b=m-b;
        if (remain_b>0)
        {
        remain_b=m-b;
        // cout<<"remain_b:"<<remain_b<<endl;/
        }
        else 
        remain_b=0;
        if (remain_a+remain_b>c)
        sum+=c;
        else
        sum+=remain_a+remain_b;
    }
    cout<<sum<<endl;
    }
    return 0;
}