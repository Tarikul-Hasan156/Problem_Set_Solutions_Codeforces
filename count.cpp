    //بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
    #include <bits/stdc++.h>
    #define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #define ll int64_t
    #define sp " "
    #define endl '\n'
    using namespace std;
        
    void solve ()
    {
        string s;cin>>s;
        ll sum=0;
        for (int i=0;i<s.size();i++){
            sum+=(s[i]-'0');
        }
        cout<<sum<<endl;
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