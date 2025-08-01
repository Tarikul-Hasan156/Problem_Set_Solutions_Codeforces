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
    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;

    int cnt = 0;

    if (x < y) {
        if (k >= a)
            cnt += (k - a) / x + 1, k -= ((k - a) / x + 1) * x;
        if (k >= b)
            cnt += (k - b) / y + 1;
    } else {
        if (k >= b)
            cnt += (k - b) / y + 1, k -= ((k - b) / y + 1) * y;
        if (k >= a)
            cnt += (k - a) / x + 1;
    }

    cout << cnt << endl;
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