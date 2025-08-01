#include <bits/stdc++.h>
using namespace std;

#define speed ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    speed;
    int s, t;
    cin >> s >> t;
    
    vector<pair<int, int>> dragons;
    
    for (int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        dragons.push_back({x, y});
    }
    
    sort(dragons.begin(), dragons.end());

    for (auto dragon : dragons) {
        int strength_needed = dragon.first;
        int bonus = dragon.second;

        if (s > strength_needed) {
            s += bonus;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
