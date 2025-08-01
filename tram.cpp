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
    vector<int>number;
    int exit,enter,remain=0;
   while(x--)
   {
    cin>>exit>>enter;
         remain=abs(remain-exit);
        remain+=enter;
        number.push_back(remain);

   }
   int maxval=INT_MIN;
   for (int num:number)

   {
        if (num>maxval)

        {
            maxval=num;
        }
   }
   cout<<maxval<<endl;

    return 0;
}