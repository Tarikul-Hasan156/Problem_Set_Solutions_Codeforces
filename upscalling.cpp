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
    ll temp=x;
    string s1="##";
    string s2="..";
    for (int k=1;k<=x;k++)
    {
        ll cnt=2;
        if (k&1)
        {
            while (cnt--)
            {
                for (int i=1;i<=x;i++)
                {
                    if (i&1)cout<<s1;
                    else cout<<s2;
                }
                cout<<endl;
            }
        }else
        {
            while (cnt--)
            {
                for (int i=1;i<=x;i++)
                {
                    if (i&1)cout<<s2;
                    else cout<<s1;
                }
                cout<<endl;
            }
        }
    }
    // vector<vector<char>>mat1(3,vector<char>(3)),mat2(3,vector<char>(3));
    // mat1[1][1]=mat1[1][2]=mat1[2][1]=mat1[2][2]='#';
    // mat2[1][1]=mat2[1][2]=mat2[2][1]=mat2[2][2]='.';
    // for (int i=1;i<=x;i++)
    // {
    //     for (int j=1;j<=x;j++)
    //     {
    //         for (int k=1;k<=2;k++)
    //         {
    //             if (i&1 and j&1)cout<<mat1[i][j];
    //             else cout<<mat2[i][j];
    //         }
    //     }
    // }
    // cout<<endl;
    // for (int i=1;i<=x;i++)
    // {
    //     for (int j=1;j<=x;j++)
    //     {
    //         for (int k=1;k<=2;k++)
    //         {
    //             if (i&1 and j&1)cout<<mat1[j][i];
    //             else cout<<mat2[j][i];
    //         }
    //     }
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