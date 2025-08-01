#include <bits/stdc++.h>
using namespace std;

#define speed ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define forn(i, n) for (int i = 0; i < (n); i++)

int main() {
    speed;
    int x, y;
    cin >> x >> y;
    int arr[y];
    forn(i, y) cin >> arr[i];
    sort(arr, arr + y);
    int result = abs(arr[0] - arr[x - 1]); 
    for (int i = 1; i <= (y - x); i++) {
        result = min(result, abs(arr[i] - arr[i + x - 1]));
    }

    cout << result << endl;
    return 0;
}
