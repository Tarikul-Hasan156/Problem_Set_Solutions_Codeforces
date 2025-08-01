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
    int m,n;
    cin>>m>>n;
    int areaofdomino=2;
    int area=(m*n)/areaofdomino;
    cout<<area<<endl;

    return 0;
}