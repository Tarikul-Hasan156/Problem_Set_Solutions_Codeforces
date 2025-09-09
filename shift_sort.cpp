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
    void solve(){
        ll n;cin>>n;
        string s;cin>>s;
        string temp=s;
        sort(temp.begin(),temp.end());
        if (temp==s ){cout<<0<<endl;return;}
        ll cnt1=0,cnt0=0;
        for (auto &x:s)
        {
            (x=='1')?cnt1++:cnt0++;
        }
        ll p0=0;
        for (int i=0;i<cnt0;i++)
        {
            if(s[i]=='0')p0++;
        }
        ll p1=0;
        ll temp1=cnt1;
        n--;
        while (temp1--)
        {
            if (s[n--]=='1')p1++;
        }

        // cout<<p0<<sp<<p1<<endl;
        if (p1>p0)cout<<cnt1-p1<<endl;
        else cout<<cnt0-p0<<endl;
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