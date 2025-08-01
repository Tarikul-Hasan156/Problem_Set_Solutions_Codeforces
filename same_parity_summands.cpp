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
    ll n,k;cin>>n>>k;
    // vector<ll>temp;
    // if (k==1)
    // {
    //     cout<<"YES"<<endl;
    //     return;
    // }
    // if (k>(n/2))
    // {
    //     cout<<"NO"<<endl;
    //     return;
    // }
    // if (n&1 && n==2)
    // {
    //     cout<<"NO"<<endl;
    //     return;
    // }
    // cout<<"YES"<<endl;
    // if (n&1 && k&1)
    // {
    //          for (int i=0;i<k-1;i++)
    //         {
    //             // temp.push_back(1);
    //             cout<<'1'<<sp;
    //         }
    //         // temp.push_back(n-2);
    //         // ll res=accumulate(temp.begin(),temp.end(),0LL);
    //         // if (res==n)
    //         // {
    //         //     cout<<"YES"<<endl;
    //         //     for (ll ch:temp)cout<<ch<<sp;
    //         //     cout<<endl;
    //         //     return;
    //         // }
    //         cout<<n-2<<endl;
    //         return;
    // }
    // if (n&1 && k%2==0)
    // {
    //     for (int i=0;i<k-1;i++)
    //     {
    //         cout<<'1'<<sp;
    //     }
    //     cout<<n-2<<endl;
    //     return;
    // }
    // if (n%2==0 && k&1)
    // {
    //     for (int i=0;i<k-1;i++)
    //     {
    //         cout<<'2'<<sp;
    //     }
    //     cout<<n-2<<endl;
    //     return;
    // }
    // if (n%2==0 && k%2==0)
    // {
    //     for (int i=0;i<k-1;i++)
    //     {
        
    //          cout<<"2"<<sp;
    //     }
    //     cout<<n-2<<endl;
    //     return;
    // }
    int temp1= n-(k-1);
    if (temp1>0 && temp1&1)
    {
        cout<<"YES"<<endl;
        for (int i=0;i<k-1;i++)
        {
            cout<<"1"<<sp;

        }
        cout<<temp1<<endl;
        return;
    }
    int temp2=n-(2*(k-1));
    if (temp2>0 && temp2%2==0)
    {
        cout<<"YES"<<endl;
        for (int i=0;i<k-1;i++)
        {
            cout<<"2"<<sp;
        }
        cout<<temp2<<endl;
        return;

    }
    cout<<"NO"<<endl;
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