//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
 ll cnt=0;
 void cnt_vwl (string s,ll i){
    if (i==s.size())return;
    char temp=tolower(s[i]);
    if (temp=='a' or temp=='e' or temp=='i' or temp=='o' or temp=='u')cnt++;
    cnt_vwl(s,i+1);
 }
void solve ()
{
    string s;
    getline(cin,s);
    cnt_vwl(s,0);
    cout<<cnt<<endl;
    cnt=0;
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