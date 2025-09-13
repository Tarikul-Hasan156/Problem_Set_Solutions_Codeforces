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
    ll n,m;cin>>n>>m;
    vector<pair<ll,ll>>vv;
    for (int i=0;i<n;i++)
    {
        ll temp,temp1;cin>>temp>>temp1;
        vv.push_back({temp,temp1});
    }
    // vector<ll>one(n),two(n);
    // for (int i=0;i<n;i++)
    // {
    //     ll temp,temp1;cin>>temp>>temp1;
    //     one[i]=temp;two[i]=temp1;
    // }
    ll res=0,pos=0,pre=1;
    for (int i=0;i<n;i++)
    {
        ll index=vv[i].first;ll val=vv[i].second;
        ll dis=index-pre;
        res+=dis;
        if (dis&1)pos=1-pos;
        if (val!=pos)
        {
            res++;
            pos=val;
        }
        pre=index+1;
    }
    ll dis=m-pre+1;res+=dis;
    if (dis&1)pos=1-pos;
    cout<<res<<endl;
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