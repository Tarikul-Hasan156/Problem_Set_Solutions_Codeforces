//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
// Author : Tarikul Hasan Dipu
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
    vector<string>lecture1(m),lecture2(m),last,res;
    for (int i=0;i<m;i++)
    {
        string s1,s2;cin>>s1>>s2;
        lecture1[i]=s1;lecture2[i]=s2;
    }
    for (int i=0;i<n;i++)
    {
        string s;cin>>s;
        last.push_back(s);
    }
    for (int i=0;i<n;i++)
    {
        auto it=find(lecture1.begin(),lecture1.end(),last[i]);
        if (it!=lecture1.end())
        {
             ll pos=distance(lecture1.begin(),it);
             if (lecture1[pos].length()<lecture2[pos].length() || lecture1[pos].length()==lecture2[pos].length())
             {
                res.push_back(lecture1[pos]);
             }else
             {
                res.push_back(lecture2[pos]);
             }
        }else
        {
            auto it =find(lecture2.begin(),lecture2.end(),last[i]);
            ll pos=distance(lecture2.begin(),it);
             if (lecture1[pos].length()<lecture2[pos].length() || lecture1[pos].length()==lecture2[pos].length())
             {
                res.push_back(lecture1[pos]);
             }else
             {
                res.push_back(lecture2[pos]);
             }
        }
    }
    for (string ch:res)cout<<ch<<sp;
    cout<<endl;
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