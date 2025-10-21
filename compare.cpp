//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    string s1,s2;cin>>s1>>s2;
    if (s1==s2){
        cout<<s1<<endl;
        return;
    }
    for (int i=0;i<20;i++){
        if (s1[i]==s2[i])continue;
       else if (s1[i]<s2[i]){
            cout<<s1<<endl;return;
        }else{
            cout<<s2<<endl;
            return;
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