//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    string s1,s2;
    getline(cin,s1);
    stringstream ss(s1);
    string word;
    vector<string>temp;
    while(ss>>word){
        temp.push_back(word);
    }
    s1=temp[0];
    s2=temp[1];
    if (s1.size()==s2.size()){
        ll j=0;
        for (int i=0;i<s1.size();i++){
            // if (s1[i]==' ' or s2[j]==' ')continue;
            cout<<s1[i]<<s2[j];
            j++;
        }
        cout<<endl;
    }else if (s1.size()<s2.size()){
        ll j=0;
        for (int i=0;i<s1.size();i++){
            // if (s1[i]==' ' or s2[j]==' ')continue;
            cout<<s1[i]<<s2[j];
            j++;
        }
        while (j<s2.size()){
            cout<<s2[j];
           j++;
        }
        cout<<endl;
    }else{
         ll j=0;
        for (int i=0;i<s2.size();i++){
            // if (s1[i]==' ' or s2[j]==' ')continue;
            cout<<s1[j]<<s2[i];
            j++;
        }
        while (j<s1.size()){
            cout<<s1[j];
            j++;
        }
        cout<<endl;
    }
}
int main ()
{
    speed;
    int tt;
    cin>>tt;
    cin.ignore();
    while (tt--)
    {
        solve ();
    }
    return 0;
}