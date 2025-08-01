#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define speed ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    vector<int> prefix_max_a(n), prefix_max_b(n);
    prefix_max_a[0] = a[0];
    for (int i = 1; i < n; ++i) {
        prefix_max_a[i] = max(prefix_max_a[i - 1], a[i]);
    }
    prefix_max_b[0] = b[0];
    for (int i = 1; i < n; ++i) {
        prefix_max_b[i] = max(prefix_max_b[i - 1], b[i]);
    }

    vector<ll> result(n);
    for (int i = 0; i < n; ++i) {
        ll val1 = (1LL << prefix_max_a[i]) + (1LL << b[0]);
        ll val2 = (1LL << a[0]) + (1LL << prefix_max_b[i]);
        result[i] = max(val1, val2);
    }

    for (ll val : result) cout << val << " ";
    cout << '\n';
}

int main() {
    speed;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}