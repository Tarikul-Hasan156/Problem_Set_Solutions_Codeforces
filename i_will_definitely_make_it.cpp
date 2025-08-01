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
void solve() {
    ll x, k;
    cin >> x >> k;
    k -= 1;
    vector<ll> vv(x);
    for (auto &val : vv) cin >> val;

    ll currrent_pos = vv[k];
    sort(vv.begin(), vv.end());

    int j = 0;
    for (int i = 0; i < x; i++) {
        if (vv[i] == currrent_pos) {
            j = i;
            break;
        }
    }
    // ll temp=vv[k];
    // auto it=find(vv.begin(),vv.end(),temp);
    // ll j=distance(vv.begin(),it);
    ll water_pos = 0;
    bool flag = true;

    for (int i = j + 1; i < x; i++) {
        ll diff = abs(vv[i] - vv[i - 1]);
        if (water_pos + diff > vv[i - 1]) {
            flag = false;
            break;
        }
        water_pos += diff;
    }

            (flag)?cout<<"YES"<<endl:cout<<"NO"<<endl;

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