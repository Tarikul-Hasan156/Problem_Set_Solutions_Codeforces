//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve(){
    ll x,y,z;cin>>x>>y>>z;
    for(int i=0;i<64;i++){
        int X=(x>>i)&1,Y=(y>>i)&1,Z=(z>>i)&1;
        bool flag=false;
        for(int a=0;a<2;a++){
            for(int b=0;b<2;b++){
                for(int c=0;c<2;c++){
                    if(((a&b)==X)&&((b&c)==Y)&&((a&c)==Z))flag=true;
                }
            }
        }
        if(!flag){cout<<"NO"<<endl;return;}
    }
    cout<<"YES"<<endl;
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