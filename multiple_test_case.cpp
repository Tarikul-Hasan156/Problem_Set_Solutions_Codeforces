 #include<bits/stdc++.h>
 using namespace std;
 void solve ()
 {
    int x,cnt=0;cin>>x;
    vector<int>vv(x);
    for (auto&x:vv)cin>>x;
    for (int i=0;i<x;i++)
    {
      if (vv[i]&1)cnt++;
    }
    cout<<cnt<<endl;
 }
 int main ()
 {
   int tt;cin>>tt;
   while (tt--)
   {
     solve();
   }
   return 0;
 }