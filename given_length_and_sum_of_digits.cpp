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
    int m,s;cin>>m>>s;
    if (s==0 && m>1)
    {
        cout<<-1<<sp<<-1<<endl;
        return ;
    }else
    {
        int num=s-9;
        if (num>0)
        {
            string last=to_string(num);
        string mx="9"+last;
        string temp=mx;
        int size=mx.length();
        if (size==m)
        {
            reverse(temp.begin(),temp.end());
            cout<<temp<<sp<<mx<<endl;
        }else cout<<-1<<sp<<-1<<endl;
        }else
        {
            cout<<s;
            for (int i=0;i<m-1;i++)cout<<0;
            cout<<sp;
            cout<<s;
            for (int i=0;i<m-1;i++)cout<<0;
            cout<<endl;
            
            
            
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