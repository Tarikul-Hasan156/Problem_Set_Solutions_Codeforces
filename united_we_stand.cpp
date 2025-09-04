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
    ll x;cin>>x;
    vector<ll>vv(x),v(x);
    for (auto &x:vv)cin>>x;
    v=vv;
    sort(v.begin(),v.end());
    if (v[0]==v[x-1]){cout<<-1<<endl;return;}
    vector<ll>b,c;
    ll j=0;
    for (int i=0;i<x-1;i++)
    {
        if (v[i]<v[i+1]){j=i+1;break;}
    }
    for (int i=0;i<j;i++)b.push_back(v[i]);
    for (int i=j;i<x;i++)c.push_back(v[i]);
    cout<<b.size()<<sp<<c.size()<<endl;
    for (auto &x:b)cout<<x<<sp;cout<<endl;
    for (auto &x:c)cout<<x<<sp;cout<<endl;
    // ll even=0,odd=0;
    // for (int i=0;i<x;i++)
    // {
    //     ll temp;cin>>temp;
    //     if (temp&1)odd++;
    //     else even++;
    //     vv[i]=temp;
    // }
    // v=vv;
    // sort(v.begin(),v.end());
    // if (odd==0 || v[0]==v[x-1]){cout<<-1<<endl;return;}
    // if (even==0)
    // {
    //     cout<<1<<sp<<1<<endl;
    //     cout<<v[0]<<endl;
    //     cout<<vv[x-1]<<endl;
    // }else
    // {
    //     ll temp1=0,temp=0,cnt=0;
    //     bool flag1=true,flag2=true;
    //     for (int i=0;i<x and (flag1 || flag2);i++)
    //     {
    //         if (vv[i]&1 and flag1)
    //         {
    //             cout<<vv[i]<<endl;
    //             flag1=false;
    //         }else if (flag2)
    //         {
    //             cout<<vv[i]<<endl;
    //             flag2=false;
    //         }
    //     }
    // }


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