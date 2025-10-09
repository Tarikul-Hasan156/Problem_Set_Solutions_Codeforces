//বিসমিল্লাহির রহমানির রহিম (بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ)
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
bool check (string temp,char c)
{
    return temp.find(c)!=string :: npos;
}
void solve ()
{
     ll m,s;cin>>m>>s;
     if (s==0)
     {
        if (m==1)
        {
            cout<<"0 0"<<endl;
        }else cout<<-1<<sp<<-1<<endl;
        return;
     }
        string mx,mn;
        for (int i=0;i<m;i++)
        {
            ll temp=min(9LL,s);
            mx.push_back('0'+temp);
            s-=temp;
        }
       if(s>0){cout<<-1<<sp<<-1<<endl;return ;}
        reverse(mx.begin(),mx.end());
        mn=mx;
         int j=0;
      while(mn[j]=='0') j++;
      if (j>0)
        mn[0]='1';
        if (j>0)
     mn[j]=mn[j]-1;
     reverse(mx.begin(),mx.end());
     cout<<mn<<sp<<mx<<endl;

        // if (s>9)
        // {
        //     string res_mx="9";
        //     res_mx+=to_string(s-9);
        //     if (res_mx.size()>m){cout<<-1<<sp<<-1<<endl;return;}
        //     if (res_mx.size()<m)
        //     {
        //         while (res_mx.size()!=m)res_mx.push_back("0");
        //     }
        //     if (check(res_mx,'1'))
        //     {
        //         string final_res=res_mx;
        //         ll cnt_one=0,cnt_zero=0;
        //         for (int i=0;i<final_res.size();i++)
        //         {
        //             if (final_res[i]=='1')cnt_one++;
        //             if (final_res[i]=='0')cnt_zero++; // 0001123 96 1102
        //         }
        //         if (cnt_one<1 and cnt_zero>0)
        //         {
        //             cnt_zero--;
        //             string ans="1";
        //             for (int i=0;i<cnt_zero;i++)ans.push_back("0");
        //             sort(final_res.begin(),final_res.end());
        //             for(int i=0;i<final_res.size();i++){
        //                 if (final_res[i]!='0')ans.push_back(to_string(final_res[i]-'0'));
        //             }
        //            cout<<ans<<sp;
        //            sort(ans.rbegin(),ans.rend());
        //             cout<<ans<<endl;
        //             return;
        //         }  
        //         if (cnt_one<1 and cnt_zero<1)
        //         {
        //             sort(res_mx.begin(),res_mx.end());
        //             cout<<res_mx<<sp<<reverse(res_mx)<<endl;
        //             return;
        //         }else
        //         {
        //             string ans="1";
        //             cnt_one--;
        //             for ( int i=0;i<cnt_zero;i++)ans.push_back("0");
        //             for (int i=0;i<cnt_one;i++)ans.push_back("1");
        //             sort(res_mx.begin(),res_mx.end());
        //             for (int i=0;i<res_mx.size();i++)
        //             {
        //                 if (res_mx[i]!='1' and res_mx[i]!='0')ans.push_back(to_string(res_mx[i]-'0'));
        //             }
        //             cout<<ans<<sp;
        //             sort(ans.rbegin(),ans.rend());
        //             cout<<ans<<endl;
        //             // cout<<ans<<sp<<sort(ans.rbegin(),ans.rend())<<endl;
        //             return;

        //         }
        //     }else
        //     {
        //         ll cnt=2;
        //         while (cnt--)
        //         {
        //             cout<<s;
        //             for (int i=0;i<m-1;i++){
        //             cout<<0;
        //         }
        //         cout<<sp;
                
        //         }
        //         cout<<endl;
                
        //     }
        // }
}
int main ()
{
    speed;
    // int tt;
    // cin>>tt;
    // while (tt--)
    // {
        solve ();
    // }
    return 0;
}