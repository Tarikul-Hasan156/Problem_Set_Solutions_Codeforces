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
bool check(string s)
{
    return s.find("xxx")!=string::npos;
}
void solve ()
{
     ll x;cin>>x;
     string s;cin>>s;
     string temp=s;
     sort(temp.begin(),temp.end());
     if (!check(s)){cout<<0<<endl;return;}
     if (temp==s && temp[0]=='x')
     {
        cout<<x-2<<endl;
        return;
     }
     ll cnt=0;
     vector<ll>vv;
     for (int i=0;i<s.size()-1;i++)
     {
        if (s[i]==s[i+1] && s[i]=='x')cnt++;
        else
        {
            cnt ++;
            if (cnt>2)vv.push_back(cnt);
            cnt=0;
        }
     }
     cnt++;
     if (cnt>2)vv.push_back(cnt);
     ll res=0;
     for (int i=0;i<vv.size();i++)
     {
        if (vv[i]==3)res++;
        else
        {
            res+=(vv[i]-2);
        }
     }
    //  for (auto x:vv)cout<<x<<sp;
    //  cout<<endl;
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