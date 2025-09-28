//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
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
#define ll int64_t
#define maxelementofvector *max_element(digit.begin(),digit.end());
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void solve ()
{
    // after sum if first number is the even the switch to next 
    // for the second number we need to check every possible multiplication with the help of  (mul of last digit)
   ll x;cin>>x;
   ll temp=x;
//    x+=1;
   vector<ll>res;
   while (1)
   {
        x++;
        bool flag=true;
        for (int i=2;i*i<=x;i++)
        {
            if (x%i==0)
            {
                flag=false;
                break;
            }
        }
        if (flag)
        {
            res.push_back(x);
            break;
        }
        
   }
   ll scnd=temp+res[res.size()-1];
   while (1)
   {
    bool flag=true;
        for (int i=2;i*i<=scnd;i++)
        {
            if (scnd%i==0)
            {
                flag=false;
                break;
            }
        }
        if (flag)
        {
            res.push_back(scnd);
            break;
        }
        scnd++;

   }
   ll first=res[0];
   ll fst=first;
   ll second=res[1];
   ll temp2=1;
   ll cnt=3;
   while (cnt!=0)
   {
        if (cnt&1)
        {
            temp2*=first;
            cnt--;
        }else
        {
            first*=first;
            cnt/=2;
        }
   }
   cout<<min(1LL*fst*second,temp2)<<endl;
   
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