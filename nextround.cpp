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
    int x,y;
    int c=0,m=0;
    cin>>x>>y;
    int arr[x];
    for (int i =1;i<=x;i++)
    {
        cin>>arr[i];
        
    }
    for (int i=1;i<=x;i++)
    {
        if (arr[i]==0)
        m++;
        else if (arr[i]>=arr[y])
        c++;
    }
    if (m==x)
    cout<<"0"<<endl;
    else 
    cout<<c<<endl;
    return 0;
}