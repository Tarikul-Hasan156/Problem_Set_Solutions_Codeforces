#include <bits/stdc++.h>
const int MAX_VALUE = 1e6 + 1;
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int num_elements, min_count;
    cin >> num_elements >> min_count;
    vector<int> frequency(MAX_VALUE, 0);
    int max_value = 0;
    for (int i = 0; i < num_elements; i++) {
        int value;
        cin >> value;
        frequency[value]++;
        max_value = max(max_value, value);
    }
    vector<int> divisor_count(max_value + 1, 0);
    for (int i = 1; i <= max_value; ++i) {
        for (int multiple = i; multiple <= max_value; multiple += i) {
            divisor_count[i] += frequency[multiple];
        }
    }
    for (int current = max_value; current >= 1; current--) {
        if (divisor_count[current] >= min_count) {
            cout << current << endl;
            return 0;
        }
    }
    cout << 1 << '\n';
    return 0;
}