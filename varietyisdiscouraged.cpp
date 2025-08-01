#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long maxCoins(vector<int>& a) {
    int n = a.size();
    vector<vector<long long>> dp(n, vector<long long>(n, 0));

    for (int l = n - 1; l >= 0; l--) {
        for (int r = l; r < n; r++) {
            if (l == r) {
                dp[l][r] = abs(a[l]);
            } else {
               
                long long option1 = abs(a[l]) + dp[l + 1][r];
                long long option2 = abs(a[r]) + dp[l][r - 1];
                dp[l][r] = max(option1, option2);
            }
        }
    }
    return dp[0][n - 1];
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << maxCoins(a) << endl;
    }

    return 0;
}