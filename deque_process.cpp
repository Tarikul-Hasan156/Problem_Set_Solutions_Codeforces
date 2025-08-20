//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
// #include <string>
// #include <sstream>
// #include<set>
// #include<iomanip>
// #include<cstring>
// #include<cctype> //islower () issuper () for check the first char
// #include<algorithm>
// #include<cmath>
#define sortarray sort(arr,arr+x);
// #define rev reverse(s1.begin(), s1.end());
// #define uppertolowers1 transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
// #define uppertolowers2 transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
// #define descsort sort(arr, arr + n, greater<int>());
#define sp " "
#define forn(i, n) for (int i = 0; i < (n); i++)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define maxelementofvector *max_element(digit.begin(),digit.end());
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void solve()
{
    ll x;cin>>x;
    vector<ll>vv(x),temp(x);
    for (auto &x:vv)cin>>x;
    // temp=vv;
    // sort(vv.begin(),vv.end());
    // if (vv==temp)
    // {
    //     vector<char>ans(x,' ');
    
    //     ll cnt=0;
    //         for (int i=0;i<x;i++)
    //         {
    //             if (i&1)ans[i]='L';
    //             else ans[i]='R';
    //         }
    //         for (auto ch:ans)cout<<ch;
    //         cout<<endl;
            //   ll size=vv.size();
            //  bool flag1=true;
            //  ll i=0,j=size-1;
            //   while (vv.size()>0 && i<=j)
            //   {
                
            //          cout<<"L";
            //             vv.erase(vv.begin()+j);
            //          j--;
            //          if (i<=j)
            //             {
            //                     cout<<"R";
            //             vv.erase(vv.begin()+i);
            //             j--;
            //            }
                       
                    
            //   }
            //  cout<<endl;
    // }else
    // { 
        ll l=0,r=x-1;
       
        for (int i=1;i<=x;i++)
        {
             bool flag;
            if (i&1)
            {
                flag=vv[l]<vv[r];
            }else
            {
                flag=vv[l]>vv[r];
            }
            if(flag){cout<<"L";l++;}
            else {cout<<"R";r--;}
        }
        cout<<endl;
       

        // vector<char>ans(x,' ');
        // ll i=0,j=x-1,pos=0;
        // ll cntr=0,cntl=0;
        // while ( i<=j)
        // {
        //     if ((temp[i]<=temp[j] && cntr<3) || cntl==4)
        //     {
        //         ans[pos++]='R';
        //         j--;
        //         cntr++;
        //         cntl=0;
        //         // size--;
        //     }else
        //     {
        //              ans[pos++]='L';
        //             cntl++;
        //             cntr=0;
        //             i++;
        //         // size--;
                
        //     }
        // }
        // for (auto ch:ans)cout<<ch;
        //     cout<<endl;
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