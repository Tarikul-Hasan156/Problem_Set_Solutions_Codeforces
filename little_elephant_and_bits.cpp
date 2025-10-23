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
    ll one=0;
    for (int i=0;i<s.size();i++){
        if (s[i]=='1')one++;
    }
    if (one==s.size()){
        for (int i=0;i<s.size()-1;i++)cout<<s[i];
        cout<<endl;
        return;
    }
    bool flag=true;
    for (int i=0;i<s.size();i++){
        if (s[i]=='0' and flag){
            flag=false;
            continue;
        }else cout<<s[i];
       
    } cout<<endl;
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