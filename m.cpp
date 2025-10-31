//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll n,m;cin>>n>>m;
    vector<ll>ch(n);
    vector<ll>de(m);
    for (auto &x:ch)cin>>x;
    for (auto &x:de)cin>>x;
    if (m<n){
        cout<<"NO"<<endl;
    }
    sort(ch.begin(),ch.end());
    sort(de.begin(),de.end());
    bool flag=true;
    for (int i=0,j=0;i<n;i++,j++){
        if (ch[i]<=de[j]){
            flag=false;
            break;
        }
    }
    if (flag){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
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