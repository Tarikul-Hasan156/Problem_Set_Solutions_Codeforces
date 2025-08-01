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
    int x;cin>>x;vector<ll>vv(x),v(x);for (int i=0;i<x;i++)cin>>vv[i];
    v=vv;
    int q;cin>>q;
    vector<ll>pre,sor;
    ll temp=0;
    for (int i=0;i<x;i++)
    {
        pre.push_back(temp+vv[i]);
        temp+=vv[i];
    }
    temp=0;
    sort(v.begin(),v.end());
    for (int i=0;i<x;i++)
    {
        sor.push_back(temp+v[i]);
        temp+=v[i];
    }
    // for (int ch:vv)cout<<ch<<sp;
    // cout<<endl;
    // for (int ch:v)cout<<ch<<sp;
    // cout<<endl;
    // for (int ch:pre)cout<<ch<<sp;
    // cout<<endl;
    // for (int ch:sor)cout<<ch<<sp;
    // cout<<endl;
    for (int i=0;i<q;i++)
    {
        int n,l,r;cin>>n>>l>>r;
        if (n==1)
        {
            if (l==r)
            cout<<vv[r-1]<<endl;
            else if (l==1)
            cout<<pre[r-1]<<endl;
            else cout<<pre[r-1]-pre[l-2]<<endl;

        }else
        {
            if (l==r)
            cout<<v[r-1]<<endl;
            else if (l==1)
            cout<<sor[r-1]<<endl;
            else cout<<sor[r-1]-sor[l-2]<<endl;

        }
    }

}
int main ()
{
    speed;
    // int tt;
    // cin>>tt;
    // while (tt--)
    // {
        solve ();
    // }
    return 0;
}