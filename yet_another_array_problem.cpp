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
const ll N=2e5;
bool check (ll x){
    if (x==1)return false;
    if (x<=3)return true;
    for (int i=2;i*i<=x;i++){
        if (x%i==0){
            return false;
        }
    }
    return true;
}
void solve ()
{
    ll x;cin>>x;
    vector<ll>vv(x);
    for (auto &x:vv)cin>>x;
    for (int i=2;i<=N;i++){
        if (check(i)){
            for (int j=0;j<x;j++){
                if (__gcd(vv[j],(ll)i)==1){
                    cout<<i<<endl;
                    return;
                }
            }
        }
    }
    cout<<-1<<endl;
    // ll x;cin>>x;
    // vector<ll>vv(x);
    // for (auto &x:vv)cin>>x;
    // ll l=2,r=N;
    // if (l==1)l++;
    // ll temp=sqrt(r);
    // vector<bool>flag(temp+1,true);
    // vector<ll>st;
    // st.push_back(0);
    // for (int i=2;i*i<=temp;i++)
    // {
    //     if (flag[i])
    //     {
    //         for (int j=i*i;j<=temp;j+=i)
    //         {
    //             flag[j]=false;
    //         }
    //     }
    // }
    // for (int i=2;i<=temp;i++)
    // {
    //     if (flag[i])st.push_back(i);
    // }
    // vector<bool>res(r-l+1+1,true);
    // for (int i=1;i<st.size();i++)
    // {
    //     if (st[i]*st[i]<=r)
    //     {
    //         ll g=(ll)(l/st[i])*st[i];
    //         if (g<l)g+=st[i];
    //         for (int j=g;j<=r;j+=st[i])
    //         {
    //             if (j!=st[i])
    //               res[j-l+1]=false;
    //          }
    //     }
    // }
    // vector<ll>ans;
    // for (int i=l;i<=r;i++)
    // {
    //     if (res[i-l+1])ans.push_back(i);
    // }
    // ll mn=*min_element(ans.begin(),ans.end());
    // cout<<mn<<endl;
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