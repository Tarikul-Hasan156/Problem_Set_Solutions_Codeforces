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
    int x;cin>>x;
    vector<int>vv(x);
    for (auto&x:vv)cin>>x;
    sort(vv.begin(),vv.end());
     ll cnt=0,res=0,j=0;
     for (int i=0;i<x;i++)
     {
        if (vv[i]==0)
        {
           j=i;
            cnt++;
        }else break;
     }
     if (cnt==0)
     {
        res=accumulate(vv.begin(),vv.end(),0LL);
        cout<<res<<endl;
     }else
     {
        res+=cnt;
        res+=accumulate(vv.begin()+j+1,vv.end(),0LL);
        cout<<res<<endl;
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