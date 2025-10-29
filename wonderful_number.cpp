//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
 bool check_palindrome (string s){
    ll l=0,r=s.size()-1;
    while (l<=r){
        if (s[l]!=s[r])return false;
        l++,r--;
    }
    return true;
 }
void solve ()
{
    ll x;cin>>x;
    string s="";
    ll last_one=0;
    for (int i=0;i<64;i++){
        if ((x>>i)&1)last_one=i;
    }
    for (int i=0;i<=last_one;i++){
        int temp=(x>>i)&1;
        s+=to_string(temp);
    }
    if (check_palindrome(s) and x&1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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