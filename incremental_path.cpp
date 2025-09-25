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
// const ll N=1e5+15;
using namespace std;
void solve ()
{
    ll x ,y;cin>>x>>y;
    string s;cin>>s;
    // vector<ll>vv(y);
    set<ll>st;
    for (int i=1;i<=y;i++)
    {
        ll temp;cin>>temp;
        st.insert(temp);
    }
    // for (auto &x:vv)cout<<x<<sp;cout<<endl;
    // vector<bool>black(N,false);
    // for (int i=1;i<=y;i++)
    // {
    //     black[vv[i]]=true;
    // }
    ll j=1;
    for (auto &ch:s)
    {
        j++;
        if (ch=='B')
        {
            while (st.count(j))j++;
            
        }
        st.insert(j);
        if (ch=='B')
        {
            while(st.count(j))j++;
        }
    }
        
    // for (int i=1;i<N;i++)
    // {
    //     if (black[i])res.push_back(i);
    // }
    cout<<st.size()<<endl;
    for (auto &x:st)cout<<x<<sp;cout<<endl;
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