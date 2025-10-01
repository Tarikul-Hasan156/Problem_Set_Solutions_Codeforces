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
    vector<ll>vv(x);
    for (auto &x:vv)cin>>x;
    sort(vv.begin(),vv.end());
    ll e=0,o=0;
    for (int i=0;i<x;i++)
    {
        if (vv[i]&1)o++;
        else e++;
    }
    if (vv[0]==vv[x-1]){cout<<"YES"<<endl;return;}
     if (e%2==0 or o%2==0){cout<<"YES"<<endl;return;}
        vector<ll>even,odd;
        for (int i=0;i<x;i++)
        {
            if (vv[i]&1)odd.push_back(vv[i]);
            else even.push_back(vv[i]);
        }
        ll size_even=even.size();
        ll size_odd=odd.size();
        if (size_even>=size_odd)
        {
            for (int i=0;i<size_odd;i++)
            {
                for (int j=0;j<size_even;j++)
                {
                    if (abs(odd[i]-even[j])==1){cout<<"YES"<<endl;return;}
                    if (even[j]-odd[i]>1)break;
                }
            }
            cout<<"NO"<<endl;
        }else
        {
            for (int i=0;i<size_even;i++)
            {
                for (int j=0;j<size_odd;j++)
                {
                    if (abs(odd[j]-even[i])==1){cout<<"YES"<<endl;return;}
                    if (odd[j]-even[i]>1)break;
                }
            }
            cout<<"NO"<<endl;
    }
    // if (e%2==0 and o%2==0){cout<<"YES"<<endl;return;}
    // if (vv[0]==vv[x-1])cout<<"YES"<<endl;
    // else
    // {
    //     vector<ll>temp;
    //     for (int i=0;i<x-1;)
    //     {
    //         if (abs(vv[i]-vv[i+1])==1)i+=2;
    //         else
    //         {
    //             temp.push_back(vv[i]);
    //             i++;
    //         }
    //     }
    //     if (abs(vv[x-2]-vv[x-1])!=1)temp.push_back(vv[x-1]);
    //     ll even_cnt=0,odd_cnt=0;
    //     for (int i=0;i<temp.size();i++)
    //     {
    //         if (temp[i]&1)odd_cnt++;
    //         else even_cnt++;
    //     }
    //     if (odd_cnt==temp.size() or even_cnt==temp.size() or ((even_cnt%2==0 and even_cnt!=0) and (odd_cnt%2==0 and odd_cnt!=0)))cout<<"YES"<<endl;
    //     else cout<<"NO"<<endl;

    // }
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