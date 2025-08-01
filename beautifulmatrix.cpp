#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include<cmath>
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main ()
{
    speed;
    int r=0,c=0;
    // int arr[5][5];
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        {
            // cin>>arr[i][j];
            int x;
            cin>>x;
            if (x==1)
            // if (arr[i][j]==1)
            {
                 r=i;
                   c=j;
            }
           
        }
    }
    cout<<abs(r-3)+abs(c-3)<<endl;
    return 0;
}