//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
bool check (ll x){
    if (x==1)return false;
    if(x<=3)return true;
    if (x%2==0)return false;
    for (int i=2;i*i<=x;i++){
        if (x%i==0)return false;
    }
    return true;
}
bool check_palindrome (ll x){
    string temp=to_string(x);
    ll l=0,r=temp.size()-1;
    while (l<=r){
        if (temp[l]!=temp[r])return false;
        l++,r--;
    }
    return true;
}
ll divisor_cnt(ll x){
    ll res=0;
    set<ll>st;
    for (int i=1;i*i<=x;i++){
        if (x%i==0){
            st.insert(i);
            st.insert(x/i);
        }
    }
    return st.size();
}
void solve ()
{
    ll x;cin>>x;
    vector<ll>vv(x);
    for (auto &x:vv)cin>>x;
    ll mx=*max_element(vv.begin(),vv.end());
    ll mn=*min_element(vv.begin(),vv.end());
    ll prime_num=0;
    ll palindrom=0;
    sort(vv.begin(),vv.end());
    ll mx_divisor=0;
    ll temp_num_divisor=0;
    for (int i=0;i<x;i++){
        if (check(vv[i])){prime_num++;}
        if (check_palindrome(vv[i]))palindrom++;
        if (divisor_cnt(vv[i])>=temp_num_divisor and vv[i]>=mx_divisor){
            mx_divisor=vv[i];
            temp_num_divisor=divisor_cnt(vv[i]);
        }
    }
    cout<<"The maximum number : "<<mx<<endl;
    cout<<"The minimum number : "<<mn<<endl;;
    cout<<"The number of prime numbers : "<<prime_num<<endl;
    cout<<"The number of palindrome numbers : "<<palindrom<<endl;
    cout<<"The number that has the maximum number of divisors : "<<mx_divisor<<endl;
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