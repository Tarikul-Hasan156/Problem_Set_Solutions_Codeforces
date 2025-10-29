//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll n,x,y;cin>>n>>x>>y;
    vector<vector<ll>>vv(n+1,vector<ll>(n+1));
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cin>>vv[i][j];
        }
    }
    for (int i=1;i<=n;i++){
        swap(vv[x][i],vv[y][i]);
    }
    for (int i=1;i<=n;i++){
        swap(vv[i][x],vv[i][y]);
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout<<vv[i][j]<<sp;
        }
        cout<<endl;
    }
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