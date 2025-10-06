//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll x,k;cin>>x>>k;
    string s;cin>>s;
    vector<char>vv(x,'+');
    ll l=0,r=x-1;
    ll two=0;
    if (x==1){cout<<'-'<<endl;return;}
    sort(s.begin(),s.end());
    for (int i=0;i<s.size();i++)
    {
        if (s[i]=='0')
        {
            vv[l]='-';
            l++;
        }   
        else if (s[i]=='1')
        {
            vv[r]='-';
            r--;
        }else two++;
    }
    if(two==r-l+1)
    {
        for(int i=l;i<=r;i++)
        {
            vv[i]='-';
        }
    }
    else
    {
        for(int i =0;i<two;i++)
        {
            vv[l+i]='?';
            vv[r-i]='?';
        }
        
    }
    for (int i=0;i<x;i++)
    {
        cout<<vv[i];
    }
    cout<<endl;
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