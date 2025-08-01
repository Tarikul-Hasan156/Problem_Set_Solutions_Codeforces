#include<bits/stdc++.h>
#define ll long long
#define sp " "
using namespace std;
void solve ()
{
    vector<int>vv;
    int n,d,x,y;
    cin>>n>>d>>x>>y;
    double dis=sqrt(x*x+y*y);
    // cout<<"dis"<<dis<<endl;
    int cnt=0,snd=0;
    for (int i=1;i<=n;i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
       ll dx=temp1-x;
       ll dy=temp2-y;
       double temp=sqrt(1LL*dx*dx+1LL *dy*dy);
        
        if (temp<=d)
        {
            cnt++;
            
        }else
        {
            snd++;
            vv.push_back(i);
        }
    }
    if (cnt==n)
    {
        cout<<"FE!N"<<endl;
    }else
    {
        cout<<snd<<endl;
        for (int i=0;i<vv.size();i++)cout<<vv[i]<<sp;
        cout<<endl;
    }




}
int main ()
{
    int tt;
    cin>>tt;
    while (tt--)
    {

        solve ();
    }

    return 0;
}