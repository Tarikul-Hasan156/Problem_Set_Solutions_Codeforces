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
    ll size=s.length();
    // vector<ll>hash(10,0);
    // for (int i=0;i<size;i++)
    // {
    //     hash[s[i]-'0']++;
    // }
    // bool flag=false;
    // for (int i=0;i<size;i++)
    // {
    //     if (hash[i]&1){flag=true;break;}
    // // }
    // if (flag)
    // {
        ll j=0;
        string s1="";
        string s2="";
        s1+=s[0];
        for (int i=1;i<size;i++)
        {
            if (s[i]!='0'){j=i;break;}
            else s1+=s[i];
        }
        for (int i=j;i<size;i++)
        {
            s2+=s[i];
        }
        //  cout<<s2<<endl<<s1<<endl;
        if (stoi(s2)>stoi(s1)){cout<<s1<<sp<<s2<<endl;}
        else cout<<-1<<endl;
    // }else cout<<-1<<endl;

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