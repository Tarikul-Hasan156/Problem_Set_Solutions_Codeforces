//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll x,k;cin>>x>>k;
    string s;cin>>s;
    vector<ll>temp;
    for (int i=0;i<s.size();i++)
    {
        if (s[i]=='1')temp.push_back(i+1);
    }
    if (temp.empty()){cout<<0<<endl;return;}
    if (temp.size()==1){cout<<1<<endl;return;}
    ll res=temp.size();
    for (int i=0;i<temp.size()-1;i++){
        if (abs(temp[i]-temp[i+1])<=k-1)res--;
    }
    cout<<res<<endl;
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