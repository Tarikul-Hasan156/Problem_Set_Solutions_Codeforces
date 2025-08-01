#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    int x;
    cin >> x;
    vector<int> v(x);
    for (int i = 0; i < x; i++) cin >> v[i];
    int y;
    cin >> y; 
    vector<int> vv(y);
    for (int i = 0; i < y; i++) cin >> vv[i];
    vector<int> starts, ends;
    int sum = 0;
    for (int i = 0; i < x; i++) {
        int start = sum + 1;
        sum += v[i];
        int end = sum;
        starts.push_back(start);
        ends.push_back(end);
    }
    for (int i = 0; i < y; i++) {
        int value = vv[i];
        int l = 0, r = x - 1, ans = -1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (starts[mid] <= value && value <= ends[mid]) {
                ans = mid;
                break;
            } else if (value < starts[mid]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << ans + 1 <<endl;
    }
}

int main() {
    speed;
    solve();
    return 0;
}
