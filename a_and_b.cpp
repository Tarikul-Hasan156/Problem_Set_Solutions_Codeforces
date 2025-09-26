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
    string s;cin>>s;
    string s1=s;
    sort(s1.rbegin(),s1.rend());
    if (is_sorted(s.begin(),s.end()) || s1==s){cout<<0<<endl;return;}
    ll res=LLONG_MAX;
    for (char ch:{'a','b'})
    {
        vector<ll>pos;
        for (int i=0;i<s.size();i++)
        {
            if (s[i]==ch)
            {
                pos.push_back(i);
            }
        }
        ll mid=pos[pos.size()/2];
        ll temp=0;
        for (int i=0;i<pos.size();i++)
        {
            temp+=abs(mid+i-(int)pos.size()/2-pos[i]);
        }
        res=min(res,temp);
    }
    cout<<res<<endl;
    // ll cnta=0,cntb=0;
    // for (int i=0;i<s.size();i++)
    // {
    //     if (s[i]=='a')cnta++;
    //     else cntb++;
    // }
    // if (cnta==1 || cntb==1){cout<<0<<endl;return;}
    // ll middle=INT_MIN;
    // if (x&1)middle=x/2;
    //  else middle=(x/2)-1;
    //  ll smiddle=middle;
    //  ll res=0;
    //  for (int i=middle+1;i<s.size();i++)
    //  {
    //     if (s[middle]==s[i])
    //     {

    //         res+=abs(middle-i)-1;
    //         middle=i;

    //     }
    //  }
    //  for ( int i=0;i<smiddle;i++)
    //  {
    //     if (s[i]==s[smiddle])
    //     {
    //         res+=abs(i-smiddle)-1;
    //         smiddle=abs(i-smiddle)-1;
    //     }
    //  }
    //  cout<<res<<endl;


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