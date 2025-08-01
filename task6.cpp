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
const int Max=1e5+5;
void solve (int cnt)
{
    vector<int>vv(Max,0);
    ll int drone, animal;
    cin>>drone>>animal;
    for (int i=0;i<drone;i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        vv[temp1]++;
        if (temp2+1<Max)
        {
            vv[temp2+1]--;
        }
    }
    for (int i=1;i<Max;i++)

    {
        vv[i]+=vv[i-1];
    }
    cout<<"Case "<<cnt<<":"<<endl;
    while (animal--)
    {
        int p;
        cin>>p;
        cout<<vv[p]<<endl;
    }
}
int main ()
{
    speed;
    ll int tt;
    cin>>tt;
    for (int i=1;i<=tt;i++)
    {
        solve(i);
    }
   
    return 0;
}