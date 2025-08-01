#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string rev = s;
    reverse(rev.begin(), rev.end());
    if (s < rev || (k >= 1 && *min_element(s.begin(), s.end()) != *max_element(s.begin(), s.end()))) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
