// বিসমিল্লাহির রহমানির রহিম (بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ)
#include <bits/stdc++.h>
// #include <string>
// #include <sstream>
// #include<set>
// #include<iomanip>
// #include<cstring>
// #include<cctype> //islower () issuper () for check the first char
// #include<algorithm>
// #include<cmath>
#define sortarray sort(arr, arr + x);
// #define rev reverse(s1.begin(), s1.end());
// #define uppertolowers1 transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
// #define uppertolowers2 transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
// #define descsort sort(arr, arr + n, greater<int>());
#define sp " "
#define forn(i, n) for (int i = 0; i < (n); i++)
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll int64_t
#define maxelementofvector *max_element(digit.begin(), digit.end());
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
void solve() {  
    
    ll n; cin>>n; vector<int> arr(n); for (int i=0;i<n;i++)cin>>arr[i];
    bool fl = false;
   for (int i=0;i<n-1;i++) if(abs(arr[i] - arr[i+1]) <= 1) {fl = true; break;}
    if(fl) {
        cout << 0 << endl;
        return;
    }
    for(int i = 0; i <= n-2; i++) {
        ll mini = min(arr[i], arr[i+1]);
        ll maxi = max(arr[i], arr[i+1]);
        if(i != 0 && arr[i-1] >= mini-1 && arr[i-1] <= maxi + 1) {
            fl = true;
            break;
        }
        if(i != n-2 && arr[i+2] >= mini-1 && arr[i+2] <= maxi + 1) {
            fl = true;
            break;
        }
    }
    if(fl == false) cout << -1 << endl;
    else cout << 1 << endl; 

}

int main()
{
    speed;
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}