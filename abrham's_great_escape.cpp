//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
void display (vector<vector<char>>&vv)
{
    for (int i=1;i<vv.size();i++)
    {
        for (int j=1;j<vv.size();j++)
        {
            cout<<vv[i][j];
        }
        cout<<endl;
    }
}   

void solve ()
{
    ll x,y;cin>>x>>y;
    vector<vector<char>>vv(x+1,vector<char>(x+1));
    for (int i=1;i<=x;i++)
    {
        for (int j=1;j<=x;j++)
        {
            if (j==1)vv[i][j]='R';
             else vv[i][j]='L';
            
        }
    }
    ll cnt=0;
    ll temp_i=0,temp_j=0;
    bool flag=true;
    for (int i=1;i<=x; i++)
    {
        for ( int j = 1; j<=x; j++) 
        {
            cnt++;
            if (cnt==y+1)
            {
                temp_i=i,temp_j=j;
                flag=false;
                break;
            }else vv[i][j]='U';
            
        }
        if (!flag)break;
    }
    if (x*x==y+1){cout<<"NO"<<endl;return;}
    if (cnt<=(x*x)-x)vv[temp_i][temp_j]='D';
    else 
    {
        if (vv[temp_i][temp_j]=='L')vv[temp_i][temp_j]='R';
    }
    cout<<"YES"<<endl;
    display(vv);
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