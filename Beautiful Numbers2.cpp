//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e6+9;

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
const int mod=1000000007;
int a,b;
int fac[N];
void fact (){
    fac[0]=1;
    for (int i=1;i<N;i++)fac[i]=1LL*fac[i-1]*i%mod;
}
bool check (int n){
    string s=to_string(n);
    for (auto ch:s){
        int val=ch-'0';
        if (val==a or val==b){
            continue;
        }else return false;
    }
    return true;
}
int power2 (int n, int a){
    int ans=1%mod;
    while (a){
        if (a&1){
            ans=1LL*ans*n%mod;
        }
        n=1LL*n*n%mod;
        a>>=1;
    }
    return ans;
}
int inverse(int n){
    return power2(fac[n],mod-2);
}
void solve ()
{
    int n;cin>>a>>b>>n;
    if (n==1){
        cout<<2<<endl;return;
    }
    int ans=0;
    for (int i=0;i<=n;i++){
        int val1=i*a;
        int val2=(n-i)*b;
        if (check(val1+val2)){
            int in=1LL*inverse(i)*inverse(n-i)%mod;
            ans+=1LL*fac[n]*in%mod;
        }
        ans%=mod;
    }
    cout<<ans<<endl;
}

int main ()
{
    speed;
    fact();
    solve();
    return 0;
}