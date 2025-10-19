//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll x;cin>>x;
    string s;cin>>s;
    for (int mask=0;mask<(1<<x);mask++){
        string temp="";
        vector<pair<char,ll>>res;
        for (int i=0;i<x;i++){
            if ((mask>>i)&1){
                temp+=s[i];
            }else{
                res.push_back({s[i],i+1});
            }
        }
        // if (temp=="110011"){
        //     cout<<"FOUND"<<endl;
        //     for (int i=0;i<res.size();i++){
        //         cout<<res[i].second<<sp;
        //     }
        //     cout<<endl;
        //     return;
        // }
        bool flag=true;
        ll l=0,r=temp.size()-1;
        while (l<=r){
            if (temp[l]!=temp[r]){
                flag=false;
                break;
            }
            l++,r--;
        }
        if (flag and is_sorted(res.begin(),res.end())){
            cout<<res.size()<<endl;
            for (int i=0;i<res.size();i++){
                cout<<res[i].second<<sp;
            }
            cout<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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