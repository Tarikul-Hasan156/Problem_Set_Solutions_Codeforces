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
void solve ()
{
    ll x;cin>>x;
    vector<ll>vv(x),v(x);
    for (int i=0;i<x;i++)
    {
        ll temp;cin>>temp;
        temp=abs(temp);
        vv[i]=temp;
    }
    ll res=vv[0];
    sort(vv.begin(),vv.end());
    auto it=find(vv.begin(),vv.end(),res);
    ll index=it-vv.begin();
    ll pos=0;
    if (x&1)
    {
        pos=x/2;
    }else
    {
        pos=(x/2);
    }   
    cout<<((res<=vv[pos])?"YES":"NO")<<endl;
    // ll first_mx=*max_element(vv.begin(),vv.end());
    // ll first_mn=*min_element(vv.begin(),vv.end());
    // ll target=abs(vv[0]);
    // vv.erase(vv.begin());
    // vv.push_back(target);
    // auto it=max_element(vv.begin(),vv.end());
    // ll mx_index=it-vv.begin();
    // ll mx=*it;
    // vv.erase(vv.begin()+mx_index);
    // vv.push_back(-target);
    // ll mn=*min_element(vv.begin(),vv.end());
    // if ((-target==mn && target==mx) && (x>2))cout<<"NO"<<endl;
    // else cout<<"YES"<<endl;
    // v=vv;
    // ll target=vv[0];
    // if (x==1 || x==2){cout<<"YES"<<endl;return;}
    // sort(vv.begin(),vv.end());
    // ll res=abs(v[0]);
    // v.erase(v.begin());
    // v.push_back(res);
    // auto sef=max_element(v.begin(),v.end());
    // ll smx=*sef;
    // ll mx_index=sef-vv.begin();
    // v.erase(vv.begin()+mx_index);
    // v.push_back(-res);
    // ll mn=*min_element(v.begin(),v.end());
    // if (smx==res and mn==-res){cout<<"NO"<<endl;return;}
    // ll pos=0;
    //     if (x%2==0)
    //     {
    //          pos=(x /2)-1;
    //         if(target==vv[pos]){cout<<"YES"<<endl;return;}
    //     }
    //     if (x&1)
    //     {
    //         pos=(x/2);
    //         if(target==vv[pos]){cout<<"YES"<<endl;return;}
    //     }
    //      auto it=find(vv.begin(),vv.end(),target);
    //         int temp=distance(vv.begin(),it);
    //         if (temp<pos)
    //         {
    //             ll cnt=0;
    //             int last=pos-temp; 
    //             // cout<<last<<endl;
    //             // cout<<pos<<endl;
    //             // cout<<temp<<endl;
    //             for (int i=temp+1;i<x;i++)
    //             {
    //                 ll val=abs(vv[i]);
    //                 target=abs(target);
    //                 if (target>val || -target>-val || -target>val || target>-val)cnt++;
    //                 if (cnt==last){cout<<"YES"<<endl;return;}
    //             }
    //             cout<<"NO"<<endl;
    //         }else
    //         {
    //             ll cnt=0;
    //             int last=temp-pos;
    //             // cout<<last<<endl;
    //             // cout<<pos<<endl;
    //             for (int i=0;i<temp;i++)
    //             {
    //                 target=abs(target);
    //                 // cout<<vv[i]<<endl;
    //                 ll val=abs(vv[i]);
    //                 if (target<val || -target<-val || -target<val || target<-val)cnt++;
    //                 if (cnt==last){cout<<"YES"<<endl;return;}
    //             }
    //             cout<<"NO"<<endl;
    //         }
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