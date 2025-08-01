#include <bits/stdc++.h>
using namespace std;

#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
   int n;
    cin >> n;
    int cnt2021 = n % 2020;
    int cnt2020 = (n - cnt2021) / 2020 - cnt2021;
    // cout<<cnt2021<<" "<<cnt2020<<endl;
    if (cnt2020 >= 0 && 2020 * cnt2020 + 2021 * cnt2021 == n) {
      yes;
    } else {
      no;
    }
  }



int main() {
    speed;
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
