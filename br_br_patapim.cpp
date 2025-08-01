#include <bits/stdc++.h>
using namespace std;

#define speed ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define sp " "

int main() {
    speed;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }
        vector<int> p(2 * n + 1); 
        set<int> all_nums;
        for (int i = 1; i <= 2 * n; i++) {
            all_nums.insert(i);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int k = i + j + 2;
                p[k] = grid[i][j];
                all_nums.erase(grid[i][j]);
            }
        }
        p[1] = *all_nums.begin();
        for (int i = 1; i <= 2 * n; i++) {
            cout << p[i] << sp;
        }
        cout << '\n';
    }

    return 0;
}
