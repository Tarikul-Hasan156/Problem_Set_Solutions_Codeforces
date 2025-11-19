//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll x;
    char target;cin>>x>>target;
    string s=" ";
    string temp;cin>>temp;
    s+=temp;
    vector<ll>vec_target,vec_grn;
    for (int i=1;i<s.size();i++){
        if (s[i]=='g')vec_grn.push_back(i);
        if (s[i]==target)vec_target.push_back(i);
    }
    // for (auto &x:vec_target)cout<<x<<sp;cout<<endl;
    // for (auto &x:vec_grn)cout<<x<<sp;cout<<endl;
    vector<ll>res;
   for (int i=0;i<vec_target.size();i++){
        auto it=lower_bound(vec_grn.begin(),vec_grn.end(),vec_target[i]);
        if (it!=vec_grn.end()){
            res.push_back(*(it)-vec_target[i]);
        }else{
            res.push_back(vec_grn[0]+(x-vec_target[i]));
        }
   }
//    for (auto &x:res)cout<<x<<sp;cout<<endl;
   cout<<*max_element(res.begin(),res.end())<<endl;

}
int main ()
{
    speed;
    int tt;
    cin>>tt;
    while (tt--)
    {
        solve ();
    }
    return 0;
}