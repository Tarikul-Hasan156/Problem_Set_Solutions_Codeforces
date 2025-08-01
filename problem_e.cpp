#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> bit_counts(30, 0);
    for (int num : a) {
        for (int j = 0; j < 30; ++j) {
            if (num & (1 << j)) {
                bit_counts[j]++;
            }
        }
    }

    int optimal_k = 0;
    for (int j = 0; j < 30; ++j) {
        if (bit_counts[j] > n / 2) {
            optimal_k |= (1 << j);
        }
    }

    long long max_sum = 0;
    for (int num : a) {
        max_sum += (optimal_k ^ num);
    }

    cout << max_sum << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}