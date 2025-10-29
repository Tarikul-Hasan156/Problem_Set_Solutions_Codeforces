//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
ll r,c;
 void sum_of_matrix (vector<vector<ll>>&v,vector<vector<ll>>&vv,ll i,ll j){
        if (i>r){
            return;    
        }
        if (j>c){
            sum_of_matrix(v,vv,i+1,1);
            return;
        }
        cout<<v[i][j]+vv[i][j];
        if (j==c)cout<<endl;
        else cout<<sp;
        sum_of_matrix(v,vv,i,j+1);
 }
void solve ()
{
    cin>>r>>c;
    vector<vector<ll>>v(r+1,vector<ll>(c+1));
    vector<vector<ll>>vv(r+1,vector<ll>(c+1));
    for (int i=1;i<=r;i++){
        for (int j=1;j<=c;j++){
            cin>>v[i][j];
        }
    }
    for (int i=1;i<=r;i++){
        for (int j=1;j<=c;j++){
            cin>>vv[i][j];
        }
    }
    sum_of_matrix(v,vv,1,1);
    // for (int i=1;i<=r;i++){
    //     for (int j=1;j<=c;j++){
    //        vv[i][j]+=v[i][j];
    //     }
    // }
    // for (int i=1;i<=r;i++){
    //     for (int j=1;j<=c;j++){
    //        cout<<vv[i][j]<<sp;
    //     }
    //     cout<<endl;
    // }
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