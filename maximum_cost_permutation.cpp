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
void solve(){
    ll x;cin>>x;
    vector<ll>vv(x),res,srt(x);
    vector<bool>check(x+1,false);
    for (int i=0;i<x;i++)
    {
        cin>>vv[i];
        check[vv[i]]=true;
    }
    for (int i=1;i<=x;i++)
    {
        if (!check[i])res.push_back(i);
    }
    // for (auto &x:res)cout<<x<<sp;cout<<endl;
    sort(res.rbegin(),res.rend());
    ll k=0;
    for (int i=0;i<x;i++)
    {
        if (vv[i]==0){vv[i]=res[k];k++;}
    }
    srt=vv;

    // for (auto x:vv)cout<<x<<sp;cout<<endl;
    ll first=0,second=0;
    for (int i=0;i<x;i++)
    {
        if (vv[i]==i+1)first++;
        else break;
    }
    for (int i=x-1;i>=0;i--)
    {
        if (vv[i]==i+1)second++;
        else break;
    }
     sort(srt.begin(),srt.end());
    // for (auto x:srt)cout<<x<<sp;cout<<endl;
   
    if (srt==vv){cout<<0<<endl;return;}
    cout<<x-first-second<<endl;
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