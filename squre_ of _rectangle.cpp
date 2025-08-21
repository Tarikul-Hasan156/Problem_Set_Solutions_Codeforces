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
    vector<pair<int,int>>vv(3);
    for (int i=0;i<3;i++)
    {
        int x,y;cin>>x>>y;
        vv[i]={x,y};
    }
    bool flag=false;
    int cnt_f=0,cnt_s=0;
    int sum_f=0,sum_s=0;
    for (int i=0;i<2;i++)
    {
        sum_f+=vv[i].first;
        sum_s+=vv[i].second;
        if (vv[i].first==vv[i+1].first)cnt_f++;
        if (vv[i].second==vv[i+1].second)cnt_s++;
    }
    sum_f+=vv[2].first;
    sum_s+=vv[2].second;
    // cout<<cnt_f<<sp<<cnt_s<<endl;
    // cout<<sum_f<<sp<<vv[0].second<<endl;
   if ((sum_f==vv[0].second && cnt_s==2)  || (sum_s==vv[0].first && cnt_f==2))cout<<"YES"<<endl;
   else if (((vv[1].first+vv[2].first==vv[0].first) && (vv[1].second==vv[2].second) && (vv[0].second+vv[1].second==vv[0].first)) 
          || ((vv[1].second+vv[2].second==vv[0].second) && (vv[1].first==vv[2].first) && (vv[0].first+vv[1].first==vv[0].second)))
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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