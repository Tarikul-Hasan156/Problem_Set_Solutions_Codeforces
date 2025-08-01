#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        
        if (n == 1) {
            cout << (x != 0 ? x : -1) << endl;
        } else if (n == 2) {
            if (x == 0) {
                cout << -1 << endl;
            } else {
                long long a = 1;
                long long b = a ^ x;
                if (b == 0 || b == a) {
                    a = 2;
                    b = a ^ x;
                }
                cout << a + b << endl;
            }
        } else {
            long long k = n - 2;
            long long xor_rest = (k % 2 == 1) ? 1 : 0;
            long long desired_xor = x ^ xor_rest;
            long long a = 2;
            long long b = a ^ desired_xor;
            if (b == 0 || b == a) {
                a = 3;
                b = a ^ desired_xor;
            }
            cout << k + a + b << endl;
        }
    }
    return 0;
}