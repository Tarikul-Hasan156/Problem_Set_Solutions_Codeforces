//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll x,y;cin>>x>>y;
    ll cnt=0;
    vector<vector<char>>vv(x+1,vector<char>(y+1));
    for (int i=1;i<=x;i++){
        for (int j=1;j<=y;j++){
            cin>>vv[i][j];
            if (vv[i][j]=='.')cnt++;
        }
    }
    // for (int i=1;i<=x;i++){
    //     for (int j=1;j<=y;j++){
    //         cout<<vv[i][j]<<sp;
    //     }
    //     cout<<endl;
    // }
    ll a,b;cin>>a>>b;
    for (int i=1;i<=x;i++){
        for (int j=1;j<=y;j++){
            // if (vv[i][j]=='.'){
            //     cout<<i<<sp<<j<<endl;
            // }
            if (vv[i][j]=='.' and i==a and j==b){
                continue;
            }else if (vv[i][j]=='.'){
                ll temp1=abs(i-a);
                ll temp2=abs(j-b);
                if (temp1<2 and temp2<2){
                    // cout<<temp1<<sp<<temp2<<endl;
                    cout<<"no"<<endl;return;
                }
            }
        }
    }
    cout<<"yes"<<endl;
    // ll temp1=a-1;
    // ll temp2=b-1;
    // if (temp1<=x and temp1<=y and temp2<=x and temp2<=y and vv[temp1][temp2]!='x' and temp1>=1 and temp2>=1){cout<<"no"<<endl;return;}
    //  temp1=a;
    //  temp2=b-1;
    // if (temp1<=x and temp1<=y and temp2<=x and temp2<=y and vv[temp1][temp2]!='x' and temp1>=1 and temp2>=1){cout<<"no"<<endl;return;}
    //  temp1=a-1;
    //  temp2=b;
    // if (temp1<=x and temp1<=y and temp2<=x and temp2<=y and vv[temp1][temp2]!='x' and temp1>=1 and temp2>=1){cout<<"no"<<endl;return;}
    //  temp1=a+1;
    //  temp2=b-1;
    // if (temp1<=x and temp1<=y and temp2<=x and temp2<=y and vv[temp1][temp2]!='x' and temp1>=1 and temp2>=1){cout<<"no"<<endl;return;}
    //  temp1=a+1;
    //  temp2=b;
    // if (temp1<=x and temp1<=y and temp2<=x and temp2<=y and vv[temp1][temp2]!='x' and temp1>=1 and temp2>=1){cout<<"no"<<endl;return;}
    //  temp1=a-1;
    //  temp2=b+1;
    // if (temp1<=x and temp1<=y and temp2<=x and temp2<=y and vv[temp1][temp2]!='x' and temp1>=1 and temp2>=1){cout<<"no"<<endl;return;}
    //  temp1=a;
    //  temp2=b+1;
    // if (temp1<=x and temp1<=y and temp2<=x and temp2<=y and vv[temp1][temp2]!='x' and temp1>=1 and temp2>=1){cout<<"no"<<endl;return;}
    //  temp1=a+1;
    //  temp2=b+1;
    // if (temp1<=x and temp1<=y and temp2<=x and temp2<=y and vv[temp1][temp2]!='x' and temp1>=1 and temp2>=1){cout<<"no"<<endl;return;}
    // cout<<"yes"<<endl;
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