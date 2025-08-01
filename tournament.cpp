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
       ll n,pos,k;cin>>n>>pos>>k;
        pos--;vector<ll>vv(n);
        for (auto&x:vv)cin>>x;
        int temp=vv[pos];
        // sort(vv.begin(),vv.end());
        ll mx=*max_element(vv.begin(),vv.end());
        if (k>1 || vv[pos]==mx)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        // // for (int ch:vv)cout<<ch<<sp;
        // // cout<<endl;
        // auto it=find(vv.begin(),vv.end(),temp);
        // int pos2=distance(vv.begin(),it);
        // if (pos2<k)
        // {
        //   cout<<"YES"<<endl;
        // }else cout<<"NO"<<endl;
        // {
            
            // int temp1=pos2;
            // temp1+=n-1-pos2;
            // temp1=n-temp1;
            // cout<<pos2<<sp<<temp1<<endl;
            // if (temp1<=k)cout<<"YES"<<endl;
            // else cout<<"NO"<<endl;
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
            // cout<<tt<<endl;  
        }
        return 0;
    }