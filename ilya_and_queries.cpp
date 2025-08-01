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
    string s;cin>>s;
    int x;cin>>x;
    vector<int>pre(s.size(),0LL);
    for (int i=1;i<s.size();i++)
    {
        pre[i] = pre[i - 1];
        if (s[i]==s[i-1])
        pre[i]++;
    }
    for (int i=0;i<x;i++)
    {
        int l,r;cin>>l>>r;
        l--;
        r--;
        // if (l < 0) l = 0;
        // if (r >= x) r = x - 1;

        // if (l > r) {
        //     cout << 0 << endl;
        // } else {
            cout << pre[r] - pre[l] << endl;
        // }

    }
}
int main ()
{
    speed;
    //  int tt;
    //  cin>>tt;
    //  while (tt--)
    //  {
        solve ();
    //  }
    return 0;
}