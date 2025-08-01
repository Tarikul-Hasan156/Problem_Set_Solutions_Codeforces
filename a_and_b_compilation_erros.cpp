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
// bool check(ll x, vector<ll>&temp2) {return find(temp2.begin(),temp2.end(),x)!=temp2.end();}
// bool check1(ll x,vector<ll>&temp3) {return find(temp3.begin(),temp3.end(),x)!=temp3.end();}
// bool check(ll x, vector<ll>&temp2) {return find(temp2.begin(),temp2.end(),x)!=temp2.end();}
// bool check1(ll x,vector<ll>&temp3) {return find(temp3.begin(),temp3.end(),x)!=temp3.end();}
void solve ()
{
    int x;cin>>x;
    vector<ll>temp1(x),temp2(x-1),temp3(x-2),temp4(x-1);
    for (auto &x:temp1) cin>>x;
    for (auto &x:temp2)cin>>x;
    for (auto &x: temp3)cin>>x;
    ll res1=accumulate(temp1.begin(),temp1.end(),0LL);
    ll res2=accumulate(temp2.begin(),temp2.end(),0LL);
    ll res3=accumulate(temp3.begin(),temp3.end(),0LL);
    cout<<res1-res2<<endl;
    cout<<res2-res3<<endl;
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