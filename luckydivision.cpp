#include <bits/stdc++.h>
using namespace std;

#define speed ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

bool isLucky(int x) {
    // Check if all digits are lucky (4 or 7)
    while (x > 0) {
        int digit = x % 10;
        if (digit != 4 && digit != 7) return false;
        x /= 10;
    }
    return true;
}

int main() {
    speed;
    int x;
    cin >> x;

    // Step 1: Check if the number itself is lucky
    if (isLucky(x)) {
        cout << "YES" << endl;
        return 0;
    }

    // Step 2: Check if the number is divisible by any lucky number
    vector<int> luckyNumbers = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for (int num : luckyNumbers) {
        if (x % num == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    // Step 3: If neither condition is met
    cout << "NO" << endl;
    return 0;
}
