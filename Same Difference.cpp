//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll x;cin>>x;
    string s;cin>>s;
    // vector<ll>vv(200,0);
    ll cnt=0;
    for(int i=0;i<s.size();i++){
        if (s[i]==s[s.size()-1]){
            cnt++;
        }
    }
    cout<<s.size()-cnt<<endl;
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