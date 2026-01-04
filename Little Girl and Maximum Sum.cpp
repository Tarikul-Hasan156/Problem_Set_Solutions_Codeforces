    //بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
    #include <bits/stdc++.h>
    #define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #define ll int64_t
    #define sp ' '
    #define endl '\n'
    using namespace std;
    const ll N=2e5+9;

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

    void solve ()
    {
        int n,q1;cin>>n>>q1;
        int q2=q1;
        vector<ll>vv(N),v(N);
        for (int i=1;i<=n;i++)cin>>vv[i];
        for (int i=1;i<=n;i++)v[i]=vv[i];
        vector<int>temp_vec(N);
        vector<pair<int,int>>range;
        while (q1--){
            int l,r;cin>>l>>r;
            range.push_back({l,r});
            temp_vec[l]++;
            temp_vec[r+1]--;
        }
        for (int i=1;i<=n;i++)temp_vec[i]+=temp_vec[i-1];
        // for (int i=1;i<=n;i++)cout<<temp_vec[i]<<sp;cout<<endl;
        vector<pair<int,int>>pr(N);
        for (int i=1;i<=n;i++){
            pr[i].first=temp_vec[i];
            pr[i].second=i;
            // pr.push_back({temp_vec[i],i});
        }
        sort(pr.begin()+1,pr.begin()+n+1,[](pair<int,int>&a,pair<int,int>&b){
            return a.first>b.first;
        });
        sort(vv.begin()+1,vv.begin()+n+1,[](int a,int b){
            return a>b;
        });
        for (int i=1;i<=n;i++){
            auto[val,index]=pr[i];
            v[index]=vv[i];
        }
        for (int i=1;i<=n;i++)v[i]+=v[i-1];
        ll ans=0;
        for (auto[l,r]:range){
            ans+=v[r]-v[l-1];
        }
        cout<<ans<<endl;
    }

    int main ()
    {
        speed;
        solve();
        return 0;
    }