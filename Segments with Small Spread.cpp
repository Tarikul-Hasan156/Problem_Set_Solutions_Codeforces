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
            ll n, k;
            vector<ll>vv(N);
            void solve ()
            {
                cin>>n>>k;
                for (int i=1;i<=n;i++)cin>>vv[i];
                ll ans=0;
                multiset<ll>mse;
                ll r=1;
                for (int i=1;i<=n;i++){
                    while (r<=n){
                        mse.insert(vv[r]);
                        if (*prev(mse.end())-*(mse.begin())>k){
                            mse.erase(mse.find(vv[r]));
                            break;
                        }
                        r++;
                    }
                    ans+=r-i;
                    mse.erase(mse.find(vv[i]));
                }
                cout<<ans<<endl;
            }

            int main ()
            {
                speed;
                solve();
                return 0;
            }