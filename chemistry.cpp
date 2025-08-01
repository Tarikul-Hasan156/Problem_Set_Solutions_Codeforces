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
    int N,K;cin>>N>>K;
    string s;cin>>s;
    vector<int>even,odd;
    int cnt=0,temp=0;
    sort(s.begin(),s.end());
    for (int i=0;i<N-1;i++)
    {
        if (s[i]==s[i+1])cnt++;
        else 
        {
            cnt++;
            if (cnt%2==0)
            {
                even.push_back(cnt);
                cnt=0;
            }else odd.push_back(cnt),cnt=0;
        }
    }
    cnt++;
    if(cnt!=0)
    {
         if (cnt%2==0)
            {
                even.push_back(cnt);
                cnt=0;
            }else odd.push_back(cnt);
    }
    int even_size=even.size();
    int odd_size=odd.size();
    // cout<<s<<endl;
    // cout<<odd_size<<endl;
    // if (odd_size>1)odd_size-K;
    // if (odd_size<0)even_size+=odd_size;
    if (odd_size>K+1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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