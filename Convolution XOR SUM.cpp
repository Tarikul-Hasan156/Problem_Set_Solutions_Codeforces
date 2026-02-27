    //بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
    #include <bits/stdc++.h>
    #define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #define ll int64_t
    #define sp ' '
    #define endl '\n'
    using namespace std;
    const ll N=1e5+9;

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
    const int mod=1e9+7;
    void solve ()
    {
        int n;cin>>n;
        int fact[n+1];
        fact[0]=1;
        fact[1]=1;
        for (int i=2;i<=n;i++){
            fact[i]=1LL*fact[i-1]*i%mod;
        }
        int a[n+1],b[n+1];
        for (int i=1;i<=n;i++)cin>>a[i];
        for (int j=1;j<=n;j++)cin>>b[j];
        vector<int>cnt(20);
        for (int i=1;i<=n;i++){
            for (int j=0;j<20;j++){
                if (a[i]>>j&1){
                    cnt[j]++;
                }
            }
        }
        ll ans=0;
        for (int i=1;i<=n;i++){
            for (int j=0;j<20;j++){
                if (b[i]>>j&1){
                    ans+=1LL*(1LL<<j)*(n-cnt[j])%mod;
                    ans%=mod;
                }else {
                    ans+=1LL*(1LL<<j)*cnt[j]%mod;
                    ans%=mod;
                }
            }
        }
        cout<<ans*fact[n-1]%mod<<endl;
    }

    int main ()
    {
        speed;
        solve();
        return 0;
    }