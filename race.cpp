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
    int a,x,y;cin>>a>>x>>y;
    int mn=min(x,y);
    int mx=max(x,y);
    if (a<=mx && a>=mn)
    {
        cout<<"NO"<<endl;
        return;
    }
    bool ok=true;
    for (int i=1;i<=100;i++)
    {
        int dis_x=abs(x-i);
        int dis_y=abs(y-i);
        if (dis_x<abs(a-x) && dis_y<abs(a-y))
        {
            cout<<"YES"<<endl;
            ok=false;
            return;
        }
    }
    cout<<"NO"<<endl;
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