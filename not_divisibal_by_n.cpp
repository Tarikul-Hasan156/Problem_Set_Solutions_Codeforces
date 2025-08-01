#include<bits/stdc++.h>
using namespace std;
void solve ()
{
    int x,y;
    cin>>x>>y;
    int result=(y-1)/(x-1);
    cout<<y+result<<endl;
}
int main ()
{
    int tt;
    cin>>tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}