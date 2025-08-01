//বিসমিল্লাহির রহমানির রহিম (بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ)
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
    int r,c;cin>>r>>c;
    int arr[r][c];
    int Max=0;
    int tempr=0,tempc=0,row=0;
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            cin>>arr[i][j];
            if (arr[i][j]>Max)
            {
                Max=arr[i][j];
                tempr=i;
                tempc=j;
            }
        }
    }
    int second=INT_MIN;
    // arr[tempr][tempc]-=1;
    for (int i=0;i<=tempc;i++)
    {
        arr[tempr][i]-=1;
    }
    for (int i=0;i<=tempr;i++)
    {
        arr[i][tempc]-=1;
    }
    for  (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            if (arr[i][j]>second)second=arr[i][j];
        }
    }
    cout<<second<<endl;
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