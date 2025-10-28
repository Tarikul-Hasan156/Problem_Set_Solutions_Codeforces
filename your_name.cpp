//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
 bool check (string s,char ch){
    return s.find(ch)!=string::npos;
 }
void solve ()
{
    ll x;cin>>x;
    cin.ignore();
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    vector<string>st;
    while (ss>>word){
        st.push_back(word);
    }
    string s1=st[0];
    string s2=st[1];
   vector<ll>hash(500,0);
   for (int i=0;i<s1.size();i++){
    hash[(int)s1[i]]++;
   }
   for (int i=0;i<s2.size();i++){
     hash[(int)s2[i]]--;
   }
   for (int i=0;i<hash.size();i++){
    if (hash[i]!=0){
        cout<<"NO"<<endl;return;
    }
   }
   cout<<"YES"<<endl;
    

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