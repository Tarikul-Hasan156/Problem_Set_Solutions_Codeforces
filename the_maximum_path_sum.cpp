//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
vector<vector<ll>>vv(11,vector<ll>(11));
ll mx_sum=LLONG_MIN;
ll n,m;
void mx_path_sum (ll i, ll j, ll total_sum){
    if (i==n and j==m){
        mx_sum=max(total_sum,mx_sum);
        return;
    }
    if (i+1<=n){
        mx_path_sum(i+1,j,total_sum+vv[i+1][j]);
    }
    if (j+1<=m){
        mx_path_sum(i,j+1,total_sum+vv[i][j+1]);
    }
}
void solve ()
{
    cin>>n>>m;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin>>vv[i][j];
        }
    }
    mx_path_sum(1,1,vv[1][1]);
    cout<<mx_sum<<endl;
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