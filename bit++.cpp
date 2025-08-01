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
    string x;
    int y=0;
    int m;
    cin>>m;
    while (m--)
    {
        cin>>x;
        if (x=="X--")
        y--;
        else if (x=="--X")
        --y;
        else if (x=="X++")
        y++;
        else if (x=="++X")
        ++y;
       

    }
     cout<<y<<endl;
    
    return 0;
}