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
    ll n,s;cin>>n>>s;
    vector<ll>vv(n);
    for (auto &x:vv)cin>>x;
    ll res=accumulate(vv.begin(),vv.end(),0LL);
    if (s<res){for (auto &x:vv)cout<<x<<sp;cout<<endl;return;}
     if (s==res){cout<<-1<<endl;return;}
   
        if (s-1==res)
        {
            for (int i=0;i<n;i++)
            {
                if (vv[i]==0){cout<<vv[i]<<sp;}
            }
            for (int i=0;i<n;i++)
            {
                if (vv[i]==2){cout<<vv[i]<<sp;}
            }
            for (int i=0;i<n;i++){if (vv[i]==1)cout<<vv[i]<<sp;}
            cout<<endl;return;
        } cout<<-1<<endl;return;
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