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
#define ll long long
#define maxelementofvector *max_element(digit.begin(),digit.end());
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;

void solve() {
    int n,k,even=0,odd=0;cin>>n>>k;
    vector<int>vv(n);
    for (int i=0;i<n;i++)
    {
        cin>>vv[i];
       (vv[i]%2==0)?even++ : odd++;
    }
    int res=accumulate(vv.begin(),vv.end(),0);
    if (res%k!=0){
        cout<<n<<endl;return;
    }
    else
    {
        if (k%2==0 && odd>0)
        {
            (odd%2==0)? cout<<even+odd-1<<endl : cout<<even+odd<<endl;
            
        
        }else {
            cout<<-1<<endl;
        }
        if (k%2!=0)
        {
            (odd)
        }
    }
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