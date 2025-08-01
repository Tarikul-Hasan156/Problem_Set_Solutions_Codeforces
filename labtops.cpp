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
void solve ()
{
    int c;
    cin>>c;
    vector<int>price(c),performance(c);
    for (int i=0;i<c;i++)
    {
        int a,b;cin>>a>>b;
        price[i]=a;
        performance[i]=b;

    }
    vector<int>v(c);
    for (int i=0;i<c;i++)
    {
        v[i]=price[i]-performance[i];
    }
    for (int i=1;i<c;i++)
    {
        if (v[i]!=v[i-1])
        {
            cout<<"Happy Alex"<<endl;
            return;
        }
    }
    cout<<"Poor Alex"<<endl;
//    sort(price.begin(),price.end()) ;
//    sort(performance.rbegin(),performance.rend());
//    if (price[c-1]==performance[0])cout<<"Happy Alex"<<endl;
//    else cout<<"Poor Alex"<<endl;
    // for (int i=0;i<c;i++)cout<<price[i]<<sp;
    // cout<<endl;
    // for ( int i=0;i<c;i++)cout<<performance[i]<<sp;
    // cout<<endl;
    
    // auto high_price=max_element(price.begin(),price.end());
    // int high_price_index=distance(price.begin(),high_price);
    // auto hight_performance=max_element(performance.begin(),performance.end());
    // int high_performance_index=distance(performance.begin(),hight_performance);
    //  cout<<*high_price<<sp<<low_price_index<<endl;
    //  cout<<*hight_performance<<sp<<high_performance_index<<endl;
    //  if (high_price_index==high_performance_index)cout<<"Poor Alex"<<endl;
    //  else cout<<"Happy Alex"<<endl;


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