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
    int x;cin>>x;
    string s;
    cin>>s;
    vector<string>vv;
    for (int i=0;i<x-1;i++)
    {
        vv.push_back(string(1, s[i]) + string(1, s[i+1]));
    }
    sort(vv.begin(),vv.end());
    // for (string ch:vv)cout<<ch<<sp;
    // cout<<endl;
    string temp="",sec="";
    int tmp=0,cnt=0;
    for (int i=0;i<x-1;i++)
    {
        if (vv[i]==vv[i+1]){cnt++;sec=vv[i];}
        else
        {
            cnt++;
            if (cnt>tmp)
            {
                tmp=cnt;
                temp=vv[i];
            }
            cnt=0;
        }
    }
    if (cnt!=0 && cnt>tmp)
    {
        temp=sec;
    }
    cout<<temp<<endl;
    
}
int main ()
{
    speed;
    //
        solve ();
    // }
    return 0;
}