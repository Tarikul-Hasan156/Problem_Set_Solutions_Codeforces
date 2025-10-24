//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll x,q;cin>>x>>q;
    string s;cin>>s;
    ll a_cnt=0;
    for (int i=0;i<s.size();i++){
        if (s[i]=='A')a_cnt++;
    }
    while (q--){
        ll ans=0;
        ll temp;cin>>temp;
        if (s.size()==a_cnt){
            cout<<temp<<endl;
            continue;
        }
        ll i=0;
        while (temp!=0){
            if (s[i%x]=='A'){
                temp--;
            }else temp/=2;
            ans++;
            i++;
        }
        cout<<ans<<endl;
    }
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