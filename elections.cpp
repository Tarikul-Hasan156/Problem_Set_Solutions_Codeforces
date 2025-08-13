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
    ll solution (ll a, ll b, ll c)
    {
        ll temp=max(b,c);
        temp+=1;
        temp-=a;
        ll res=max(0LL,temp);
        return res;
    }
    void solve ()
    {
        ll a,b,c;cin>>a>>b>>c;
        ll res1=solution(a,b,c);
        ll res2=solution(b,a,c);
        ll res3=solution(c,a,b);
        cout<<res1<<sp<<res2<<sp<<res3<<endl;
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