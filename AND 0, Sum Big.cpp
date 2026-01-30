    //بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
    #include <bits/stdc++.h>
    #define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #define ll int64_t
    #define sp ' '
    #define endl '\n'
    using namespace std;
    const ll N=1e5+9;
    const ll mod=1e9+7;
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
    int pw[30];
    void solve ()
    {
        ll n,k;cin>>n>>k;
        ll ans=1;
        for (int i=0;i<k;i++){
            ans=((ans%mod)*(n%mod))%mod;
            ans%=mod;
        }
        cout<<ans<<endl;
        // vector<int>index(30,0);
        // for (int i=0;i<pw[k];i++){
        //     for (int j=0;j<30;j++){
        //         if (i>>j&1){
        //             index[j]++;
        //         }
        //     }
        // }
        // ll ans=0;
        // for (int i=0;i<30;i++){
        //     int one=pw[k]-index[i];
        //     ans+=()
        // }
    }

    int main ()
    {
        speed;
        int tt;
        pw[0]=1;
        for (int i=0;i<30;i++){
            pw[1]=1LL*pw[i-1]*2%mod;
        }
        cin >> tt;
        while (tt--)
        {
            solve();
        }
        return 0;
    }