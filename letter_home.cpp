//বিসমিল্লাহির রহমানির রহিম (بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ)
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
     int n,pos;cin>>n>>pos;
     vector<int>vv(n);
     for (int i=0;i<n;i++)cin>>vv[i];
     int Min=*min_element(vv.begin(),vv.end());
     int Max=*max_element(vv.begin(),vv.end());
     if (pos<=Min)
     {
        cout<<Max-pos<<endl;
        return;
     }else if (pos>=Max)
     {
        cout<<pos-Min<<endl;
     }else
     {
         int last=min(abs(pos-Max),abs(pos-Min));
     int sum=abs(pos-Max)+abs(pos-Min);
     int res=(last*2)+(sum-last);
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