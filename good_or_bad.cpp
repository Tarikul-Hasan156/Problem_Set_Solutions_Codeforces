//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    string s;cin>>s;
    string temp1="101";
    string temp2="010";
    for (int i=0;i<=s.size()-3;i++){
        string tmp1="";
        for (int j=i;j<i+3;j++){
            tmp1+=s[j];
        }
        // cout<<tmp1<<endl;
        if(tmp1==temp1 or tmp1==temp2){cout<<"Good"<<endl;return;}
    }
    cout<<"Bad"<<endl;
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