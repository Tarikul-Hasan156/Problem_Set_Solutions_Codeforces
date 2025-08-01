#include <bits/stdc++.h>
using namespace std;

#define speed ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

bool possible(int a, int b, int c) {
    return a == b + c;
}

int main() {
    speed;
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int arr[] = {a, b, c};
        
        bool found = false;
        do {
            if (possible(arr[0], arr[1], arr[2])) {
                cout << "YES" << endl;
                found = true;
                break;
            }
        } while (next_permutation(arr, arr + 3));

        if (!found) {
            cout << "NO" << endl;
        }
    }
    return 0;
}
