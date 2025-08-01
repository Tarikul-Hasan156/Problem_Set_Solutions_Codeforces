#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <algorithm>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int min_removal = n - 1;
    double min_cost = numeric_limits<double>::max();

    // Check all single-digit possibilities
    for (int i = 0; i < n; ++i) {
        int digit = s[i] - '0';
        double cost = digit / (double)digit; // Will be 1.0 for all single digits
        if (cost < min_cost || (cost == min_cost && (n-1) < min_removal)) {
            min_cost = cost;
            min_removal = n - 1;
        }
    }

    // Check all two-digit combinations
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            int num = (s[i]-'0')*10 + (s[j]-'0');
            int sum = (s[i]-'0') + (s[j]-'0');
            double cost = num / (double)sum;
            int removal = n - 2;
            if (cost < min_cost || (cost == min_cost && removal < min_removal)) {
                min_cost = cost;
                min_removal = removal;
            }
        }
    }

    cout << min_removal << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}