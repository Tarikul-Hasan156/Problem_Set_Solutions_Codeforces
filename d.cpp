#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    speed;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        int known_x = -1;
        bool valid = true;

        // Step 1: Determine x from known values
        for (int i = 0; i < n; ++i) {
            if (b[i] != -1) {
                int x = a[i] + b[i];
                if (x > k || x < 0) {
                    valid = false;
                    break;
                }
                if (known_x == -1)
                    known_x = x;
                else if (x != known_x) {
                    valid = false;
                    break;
                }
            }
        }

        if (!valid) {
            cout << 0 << endl;
            continue;
        }

        if (known_x != -1) {
            for (int i = 0; i < n; ++i) {
                if (b[i] == -1) {
                    int bi = known_x - a[i];
                    if (bi < 0 || bi > k) {
                        valid = false;
                        break;
                    }
                }
            }
            cout << (valid ? 1 : 0) << endl;
        } else {
            int max_a = *max_element(a.begin(), a.end());
            int min_a = *min_element(a.begin(), a.end());

            // x - a[i] in [0, k] ⇒ x in [a[i], a[i]+k]
            // So x ∈ [max_a, min_a + k]
            int l = max_a;
            int r = min_a + k;

            if (l > r)
                cout << 0 << endl;
            else
                cout << (r - l + 1) << endl;
        }
    }
    return 0;
}
