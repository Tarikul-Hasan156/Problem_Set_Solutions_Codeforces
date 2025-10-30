//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll r,x,d,n;cin>>r>>x>>d>>n;
    string s;cin>>s;
    // if (r-d>x){
    //     cout<<0<<endl;
    //     return;
    // }
    // for (int i=0;i<n;i++){
    //     if (s[i]=='1'){
            
    //         cout<<n-i<<endl;
    //         return;
    //     }else{
    //         if (r<x){
               
    //             cout<<n-i<<endl;
    //             return;
    //         }
    //     }
    // }
    // cout<<0<<endl;
    string temp=s;
    sort(temp.begin(),temp.end());
    if (temp==s and temp[0]=='2' and r>x){
        cout<<0<<endl;
        return;
    }
    // if (r==0 and x==1 and d==1){
    //     cout<<1<<endl;
    //     return;
    // }
    ll res=0;
    for (int i=0;i<n;i++){
        if (s[i]=='1'){
            res++;
            r=max(0LL,r-d);
        }else{
            if(r<x){
                res++;
                r=max(0LL,r-d);
            }
        }
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