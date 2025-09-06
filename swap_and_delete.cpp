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
        int c0=0,c1=0;
        for(char c:s) (c=='0'?c0:c1)++;
        for(int i=0;;i++){
            if(i==s.size()||((s[i]=='0'&&c1==0)||(s[i]=='1'&&c0==0))){
                cout<<s.size()-i<<"\n";
                break;
            }
            (s[i]=='0'?c1:c0)--;
        }
}
    // string s;cin>>s;
    // string initial=s;
    // string temp=s;
    // ll size=s.size();
    // sort(temp.begin(),temp.end());
    // if (temp[0]==temp[size-1]){cout<<size<<endl;return;}
    // ll cnt_0=0,cnt_1=0;
    // for (int i=0;i<size;i++)
    // {
    //      if (s[i]=='1')cnt_1++;
    //      else cnt_0++;
    // }
    // if(cnt_0==cnt_1){cout<<0<<endl;return;}
    // if (cnt_1>cnt_0)
    // {
    //     ll cnt=0,j=0;
    //     for (int i=0;i<size;i++)
    //     {
    //         if (s[i]=='1'){
    //             cnt++;
    //             if (cnt==cnt_0)
    //             {
    //                 j=i;
    //                 break;
    //             }
    //         }
    //     }
    //     for (int i=j;i<size;i++)
    //     {
    //         if (s[i]=='1')
    //         s.erase(s.begin()+i);
    //     }
    //     // cout<<s<<endl;
    //     for (int i=0;i<s.length();i++)
    //     {
    //         if (s[i]=='1')s[i]='0';
    //         else s[i]='1';
    //     }
    //     // cout<<s<<endl;
    //     ll res=0;
    //     for (int i=0;i<s.length();i++)
    //     {
    //          if (s[i]==initial[i])res++;
    //     }
    //     cout<<res+(initial.size()-s.size())<<endl;
    // }else
    // {
    //      ll cnt=0,j=0;
    //     for (int i=0;i<size;i++)
    //     {
    //         if (s[i]=='0'){
    //             cnt++;
    //             if (cnt==cnt_1)
    //             {
    //                 j=i;
    //                 break;
    //             }
    //         }
    //     }
    //     for (int i=j;i<size;i++)
    //     {
    //         if (s[i]=='0')
    //         s.erase(s.begin()+i);
    //     }
    //     // cout<<s<<endl;
    //     for (int i=0;i<s.length();i++)
    //     {
    //         if (s[i]=='1')s[i]='0';
    //         else s[i]='1';
    //     }
    //     // cout<<s<<endl;
    //     ll res=0;
    //     for (int i=0;i<s.length();i++)
    //     {
    //          if (s[i]==initial[i])res++;
    //     }
    //     cout<<res+(initial.size()-s.size())<<endl;
    // }
// }
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