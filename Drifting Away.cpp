//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp ' '
#define endl '\n'
using namespace std;

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
    string s;cin>>s;
    if (s.size()==1 and s[0]=='*'){
        cout<<1<<endl;return;
    }
    ll size=s.size();
    vector<ll>vec_sign,vec_left_sign,vec_right_sign;
    for (int i=0;i<size;i++){
       if (s[i]=='*')vec_sign.push_back(i);
       else if (s[i]=='>')vec_right_sign.push_back(i);
       else vec_left_sign.push_back(i);
    }
    if (!vec_sign.empty())
    sort(vec_sign.begin(),vec_sign.end());
    if (!vec_left_sign.empty())
    sort(vec_left_sign.begin(),vec_left_sign.end());
    if (!vec_right_sign.empty())
    sort(vec_right_sign.begin(),vec_right_sign.end());
    // cout<<left_sign<<sp<<sign<<endl;
    // cout<<right_sign_index<<sp<<sign_index<<endl;

    if (vec_sign.size()>=2){
        cout<<-1<<endl;return;
    }
    if (!vec_right_sign.empty() and !vec_sign.empty() and vec_right_sign[0]<vec_sign.back()){
        cout<<-1<<endl;return;
    }
    if (!vec_left_sign.empty() and !vec_right_sign.empty() and vec_right_sign[0]<vec_left_sign.back()){
        cout<<-1<<endl;return;
    }
    if (!vec_sign.empty() and !vec_left_sign.empty() and vec_sign[0]<vec_left_sign.back()){
        cout<<-1<<endl;return;
    }
    
    if (vec_sign.size()>=2){
        cout<<-1<<endl;return;
    }

   ll left=0,right=0;
   for(int i=0;i<size;i++) {
        if (s[i]=='*' or s[i]=='<')left++;
        else break;
   }
   for (int i=size-1;i>=0;i--){
    if (s[i]=='*' or s[i]=='>')right++;
    else break;
   }
   cout<<max(left,right)<<endl;
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