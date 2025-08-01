#include <bits/stdc++.h>
#define sortarray sort(arr,arr+x);
#define sp " "
#define forn(i, n) for (int i = 0; i < (n); i++)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define maxelementofvector *max_element(digit.begin(),digit.end());
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;

int main ()
{
    speed;
    int tt;
    cin >> tt;
    while (tt--)
    {
        int64_t x, y, a;
        cin >> x >> y >> a;
        int64_t result = a % (x + y);
        // cout<<result<<endl;
        if (result >= x)
            yes
        else
        no
           
    }
    return 0;
}
