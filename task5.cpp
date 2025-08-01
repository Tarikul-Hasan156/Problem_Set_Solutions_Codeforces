#include<bits/stdc++.h>
using namespace std;
signed main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> dp(n, LLONG_MAX);
    dp[0] = a[0];
    for (int i = 1; i < n; i++) {
        dp[i] = dp[i - 1] + a[i];
        for (int jump = 1; jump <= i; jump *= 2) {
            if (i - jump >= 0) {
                dp[i] = min(dp[i], dp[i - jump] + a[i]);
            }
        }
    }
    cout << dp[n - 1] << endl;
}