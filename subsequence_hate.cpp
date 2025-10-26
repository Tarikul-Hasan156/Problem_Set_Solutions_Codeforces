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
    if (s.size()<3){
        cout<<0<<endl;
        return;
    }
    ll cnt_0=0,cnt_1=0;
    for (int i=0;i<s.size();i++){
        if (s[i]=='1')cnt_1++;
        else cnt_0++;
    }
    ll ans=s.size();
    ll pre_0=0,pre_1=0;
    for (int i=0;i<s.size();i++){
        if (s[i]=='1'){
            pre_1++;
            cnt_1--;
        }else{
            pre_0++;
            cnt_0--;
        }
        ll c_0_1=pre_1+cnt_0;
        ll c_1_0=pre_0+cnt_1;
        ans=min({ans,c_0_1,c_1_0});
    }
    cout<<ans<<endl;
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