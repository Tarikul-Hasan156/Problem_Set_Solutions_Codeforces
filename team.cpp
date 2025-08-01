#include <bits/stdc++.h>
#include <string>
#include <sstream>
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main ()
{
    speed;
    int x,c=0;
    cin>>x;
    while (x--)
    {
        int y,n,m;
        cin>>y>>m>>n;
        if (y==1 && n==1)
        c++;
        else if (y==1 && m==1)
        c++;
        else if (m==1 && n==1)
        c++;

    }
    cout<<c<<endl;
    

    return 0;
}