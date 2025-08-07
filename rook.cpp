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
    vector<vector<string>>vv(8,vector<string>(8));
    for  (char i='8';i>='1';i--)
    {
        for (char j='a';j<='h';j++)
        {
             int r=i-'1';
             int c=j-'a';
            vv[r][c]=string(1,j)+string(1,i);
        }
    }
    // for  (char i=7;i>=0;i--)
    // {
    //     for (char j=0;j<8;j++)
    //     {
    //         cout<<vv[i][j]<<sp;
    //     }
    //     cout<<endl;
    // }
    int row=s[1]-'1';
    int col=s[0]-'a';
    // for (int i=0;i<row;i++)
    // {
       for (int j=0;j<8;j++)
       {
            if (vv[row][j]!=s)
            cout<<vv[row][j]<<endl;
       }
       for (int j=0;j<8;j++)
       {
            if (vv[j][col]!=s)
            cout<<vv[j][col]<<endl;
       }
    // }
    // for (int i=0;i<row;i++)
    // {
    //     if (row!=col)
    //     cout<<vv[row][col]<<endl;
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