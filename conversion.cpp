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
   string upper= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   string lower="abcdefghijklmnopqrstuvwxyz";
   string ans="";
    for (int i=0;i<s.size();i++){
        if (s[i]==',')ans+=' ';
        else if (upper.find(s[i])!=string::npos){
            ans+=lower[upper.find(s[i])];
        }else{
            ans+=upper[lower.find(s[i])];
        }
    }
    cout<<ans<<endl;
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