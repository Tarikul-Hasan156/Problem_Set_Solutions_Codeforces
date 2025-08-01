#include <bits/stdc++.h>
using namespace std;
#define speed ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define forn(i, n) for (int i = 0; i < (n); i++)

int main() {
    speed;

    int test;
    cin >> test;
    while (test--) {
        int x;
        cin >> x;
        int arr[x];
        bool flag = true;
        forn(i, x) cin >> arr[i];
        sort(arr, arr + x);
        for (int i = 1; i < x; i++) {
            if (abs(arr[i] - arr[i - 1])> 1) {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
