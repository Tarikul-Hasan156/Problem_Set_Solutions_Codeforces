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
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
void solve ()
{
    ll n;cin>>n;
    vector<ll>vv;
    ll cnt=0;
    for (int i=1;i*i<=n;i++)
    {
        if (n%i==0)cnt++;
    }
    if (n<24 || cnt==1){cout<<"NO"<<endl;return;}
    for (int i=2;i*i<=n && vv.size()!=3;)
    {
        if (n%i==0)
        {
            ll temp=n/i;// 4 8
                if (vv.size()==1)
                {
                    bool ok=false;
                    for (int j=0;j<vv.size();j++)
                    {
                        if (vv[j]!=i && vv[j]!=temp && i!=temp)ok=true;
                    }
                    if (ok)
                    {
                        
                        vv.push_back(i);
                        vv.push_back(temp);
                    }
                }else
                {
                    n/=i;
                vv.push_back(i);
                }
                i++;
                
            
            
        }else i++;
    }
    // cout<<vv.size()<<endl;
    // for (auto x:vv)cout<<x<<sp;
    // cout<<endl;
    if (vv.size()==3)
    {
        cout<<"YES"<<endl;
        for (auto x:vv)cout<<x<<sp;
        cout<<endl;
    }else cout<<"NO"<<endl;
    // if (n&1)   
    // {
    //     double tmp=n/(double)3;
    //     if ((n/3)!=tmp){cout<<"NO"<<endl;return;}
    //     else
    //     {
    //         n/=3;
    //         for (int i=2;i*i<=n;i++)
    //     {
    //         if (n%i==0 && i!=3)
    //         {
    //             ll temp=n/i;
    //             if (temp!=3 && temp!=i && temp>1)
    //             {
    //                 cout<<"YES"<<endl;
    //                 cout<<3<<sp<<i<<sp<<temp<<endl;return; 
    //             }
    //         }
    //     }
    //     cout<<"NO"<<endl;return;
    //     }
        
    // }else
    // {
    //     n/=2;
    //     for (int i=2;i*i<=n;i++)
    //     {
    //         if (n%i==0 && i!=2)
    //         {
    //             ll temp=n/i;
    //             if (temp!=2 && temp!=i && temp>1)
    //             {
    //                 cout<<"YES"<<endl;
    //                 cout<<2<<sp<<i<<sp<<temp<<endl;return; 
    //             }
    //         }
    //     }
    //     cout<<"NO"<<endl;return;
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