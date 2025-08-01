#include<bits/stdc++.h>
#define sp " "
#define intt long long
using namespace std;
void solve ()
{
     intt n,k;
     cin>>n>>k;
     intt arr[n];
     intt arr1[n];
     vector<intt>vv;
     for (int i=0;i<n;i++)cin>>arr[i];
     for (int i=0;i<n;i++)cin>>arr1[i];
     for (int i=0;i<n;i++)vv.push_back(arr1[i]-arr[i]);
     sort(vv.rbegin(),vv.rbegin());
     intt sum=0;
     for (int i=0;i<k;i++)sum+=vv[i];
     cout<<sum<<endl;
 
 
 
}
int main ()
{
    // int tt;
    // cin>>tt;
    // while (tt--)
    // {
 
        solve ();
    // }
 
    return 0;
}