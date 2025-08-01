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
// #define descsort sort(arr, arr + n, greater<int>());
#define sp " "
#define forn(i, n) for (int i = 0; i < (n); i++)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define maxelementofvector *max_element(digit.begin(),digit.end());
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void solve ()
{
    bool flag=true;
    int x;
    cin>>x;
    vector<int>vec(x);
    for(int i=0;i<x;i++)cin>>vec[i];
    int target=vec[0];
    sort(vec.begin(),vec.end());
    int temp=0;
    if (x%2==0)
    {
        temp=x/2;
    }else
    {
        temp=(x/2);
        temp+=1;
    }
    temp-=1;
    int mediun=vec[temp];
    int positive=0,negative=0;
    if (target==mediun)
    {
        yes;
    }else 
    {
        
        for (int i=0;i<x;i++)
        {
            if (i!=temp)
            {
                
                 if (-vec[i]<target)
                 {
                    negative++;
                    if (negative==temp)
                    {
                        yes;
                        flag=false;
                        break;
                    }
                 }
            
            if (abs(vec[i])<target)
            {
                positive++;
                if (positive==temp)
                {
                    yes;
                    flag=false;
                        break;
                }
            }
            
            }
           

        }
        if (flag)
        {
            no;
        }
       
    }
    
   
}
int main ()
{
    speed;
    int tt;
    cin>>tt;
    while (tt--)
    {
        solve ();
    }
    return 0;
}