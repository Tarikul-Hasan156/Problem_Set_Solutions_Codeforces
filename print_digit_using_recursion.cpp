//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
void print(string s,int idx){
    if (idx==s.size())return;
    cout<<s[idx]<<sp;
    print(s,idx+1);
}
void solve ()
{
    ll x;cin>>x;
    print(to_string(x),0);
    cout<<endl;
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