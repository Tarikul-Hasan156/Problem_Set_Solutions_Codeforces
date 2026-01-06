    //بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
    #include <bits/stdc++.h>
    #define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #define ll int64_t
    #define sp ' '
    #define endl '\n'
    using namespace std;
    const ll N=1e2+9;

    // struct custom_hash {
    //   static uint64_t splitmix64(uint64_t x) {
    //       x += 0x9e3779b97f4a7c15ULL;
    //       x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9ULL;
    //       x = (x ^ (x >> 27)) * 0x94d049bb133111ebULL;
    //       return x ^ (x >> 31);
    //   }
    //
    //   size_t operator()(uint64_t x) const {
    //       static const uint64_t FIXED_RANDOM =
    //           chrono::steady_clock::now().time_since_epoch().count();
    //       return splitmix64(x + FIXED_RANDOM);
    //   }
    // };
    int pre[11][N][N];
    void solve ()
    {
        int n,q,c;cin>>n>>q>>c;
        for (int i=1;i<=n;i++){
            int x,y,s;cin>>x>>y>>s;
            pre[s][x][y]++;
        }
        for (int s=0;s<=c;s++){
            for (int i=1;i<N;i++){
                for (int j=1;j<N;j++){
                    pre[s][i][j]=pre[s][i-1][j]+pre[s][i][j-1]-pre[s][i-1][j-1]+pre[s][i][j];
                }
            }
        }
        while (q--){
            ll ans=0;
            int t,x1,y1,x2,y2;cin>>t>>x1>>y1>>x2>>y2;
            for (int i=0;i<=c;i++){
                int cnt=pre[i][x2][y2]-pre[i][x2][y1-1]-pre[i][x1-1][y2]+pre[i][x1-1][y1-1];
                ans+=cnt*((i+t)%(c+1));
            }
            cout<<ans<<endl;
        }
    }

    int main ()
    {
        speed;
        solve();
        return 0;
    }