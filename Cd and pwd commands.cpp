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
    ll x;cin>>x;
    deque<string>dq;
    dq.push_back("/");
    while (x--){
        string s;cin>>s;
        if (s=="pwd"){
            // reverse(dq.begin(),dq.end());
            for (int i=(int)dq.size()-2;i>=0;i--){
                cout <<dq[i];
            }
            cout<<"/"<<endl;
        }else{
            // reverse(dq.begin(),dq.end());
            string temp;cin>>temp;
            if (temp[0]=='/'){
                for (int i=(int)dq.size()-1;i>0;i--){
                    dq.pop_front();
                }
            }
            for (int i=0;i<temp.size();i++){
                if (temp[i]=='/')temp[i]=sp;
            }
            stringstream ss(temp);
            string word;
            while (ss>>word){
                if (word=="..")dq.pop_front();
                else{
                    dq.push_front("/"+word);
                }
            }
        }
    }
}

int main ()
{
    speed;
    // int tt;
    // cin >> tt;
    // while (tt--)
    // {
        solve();
    // }
    return 0;
}