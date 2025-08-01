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
// const ll N=1000
using namespace std;
void solve()
{
   int n, maxi = INT_MIN; string ans;
   cin >> n;
   vector<pair<string, int>> a(n);
   for(int i = 0; i < n; i++)
   {
      string s; 
      int num;
      cin >> s >> num;
      a[i] = make_pair(s, num);
   }
   map<string, int> mp;
   for(auto e : a)
   {
      mp[e.first] += e.second;
   }
   for(auto e : mp) maxi = max(maxi, e.second);
   map<string, int> mp2;
   for(auto e : a)
   {
      mp2[e.first] += e.second;
      if( mp2[e.first] >= maxi && mp[e.first] == maxi)
      {
         cout << e.first << endl; 
         return;
      }
   }
}
int main ()
{
    speed;
    // int tt;
    // cin>>tt;
    // while (tt--)
    // {
        solve ();
    // }
    return 0;
}