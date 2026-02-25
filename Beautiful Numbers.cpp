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

void solve ()
{
    ll x;cin>>x;
    string s=to_string(x);
    if (s.size()==1){
        cout<<0<<endl;return;
    }
    int num=0,sum=0;
    int j=0;
    sort(s.begin()+1,s.end());
    for (int i=0;i<(int)s.size();i++){
        if (sum+(s[i]-'0')<=9){
         sum+=s[i]-'0';num++;
         j=i;
        }else break;
    }
    int num1=0,sum1=0;
    s[0]='1';
    for (int i=0;i<s.size();i++){
        if (sum1+(s[i]-'0')<=9){
            num1++,sum1+=s[i]-'0';
        }else break;
    }
    num1-=1;
    cout<<s.size()-max(num1,num)<<endl;
}

int main ()
{
    speed;
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}