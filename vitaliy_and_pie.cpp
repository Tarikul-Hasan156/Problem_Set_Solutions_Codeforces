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
bool insert(vector<pair<char,int>>&key,char s)
{
    for (auto &x:key)
    {
        if (x.first==s)return true;
    }
    return false;
}
 void check(vector<pair<char,int>>&key,char s)
{
        for (auto &p:key)
        {
            if (p.first==s)
            {
                p.second++;
            }
        }
}
bool check1(vector<pair<char,int>>&key,char s)
{
    for (auto&p:key)
    {
        if (p.first==s)
        {
            if (p.second>0)
            {
            p.second--;
            return true;
            }
            else return false;
        }
    }
    return false;
}
void solve ()
{
    ll x;cin>>x;
    string s;cin>>s;
    vector<pair<char,int>>key;
    for (int i=0;i<s.length();i+=2)
    {
        if (!insert(key,s[i]))
        {
            key.push_back({s[i],0});
        }
    }
    ll res=0;
    for (int i=0;i<s.length();i++)
    {
        if (i%2==0)
        {
             check(key,s[i]);
        }else
        {
            if (!check1(key,tolower(s[i])))
            {
                res++;
            }
        }
    }
    // for (auto &x:key)
    // {
    //     cout<<x.first<<sp<<x.second<<endl;
    // }
    cout<<res<<endl;
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