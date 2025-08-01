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
    int n,k;cin>>n>>k;
    vector<int>vv(n),temp;
    for (int i=0;i<n;i++)cin>>vv[i];
     if (n==1){cout<<0<<endl;return;}
    sort(vv.begin(),vv.end());
    // for (int ch:vv)cout<<ch<<sp;
    // cout<<endl;
    int cnt=0;bool flag=false,ok=false;
    for (int i=0;i<n-1;i++)
    {
        int diff=abs(vv[i]-vv[i+1]);
        if (diff<=k)
        {
            cnt++;
            flag=true;
        }
        else
        {
            flag=false;
            temp.push_back(cnt+1);
            cnt=0;
        }
    }
    if (flag)temp.push_back(cnt+1);
    else temp.push_back(1);
    // for (int ch:temp)cout<<ch<<sp;
    // cout<<endl;
    auto it=max_element(temp.begin(),temp.end());
    int max_index=distance(temp.begin(),it);
    temp[max_index]=0;
    ll res=accumulate(temp.begin(),temp.end(),0LL);
    cout<<res<<endl;
    
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