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
    string s;cin>>s;
    ll size=s.size();
    vector<int>vv;
    int val=stoi(s);
    while (size--)
    {
        int temp=val%10;
        vv.push_back(temp);
        val/=10;

    }
    reverse(vv.begin(),vv.end());
    for (int i=0;i<vv.size();i++)
    {
        if (vv[i]==0)vv[i]=10;
    }
    // sort(vv.begin(),vv.end());
    // for (auto &x:vv)cout<<x<<sp;cout<<endl;
    if (vv[0]==1)
    {
        ll res=4;
        for (int i=0;i<vv.size()-1;i++)
        {
            res+=abs(vv[i]-vv[i+1]);

        }
        cout<<res<<endl;
    }else
    {
        ll res=4;
        res+=abs(vv[0]-1);
        for (int i=0;i<vv.size()-1;i++)
        {
            res+=abs(vv[i]-vv[i+1]);
        }
        cout<<res<<endl;
    }
    
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