#include <bits/stdc++.h>
using namespace std;
#define speed ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main() {
    speed;
    int x, k = 1;
    cin >> x;
    int arr[x + 1], arr2[x + 1] = {0};
    for (int i = 1; i <= x; i++) arr[i] = i;
    int p;
    cin >> p;
    for (int i = 1; i <= p; i++) {
        int m;
        cin >> m;
        arr2[k] = m;
        k++;
    }
    for (int i = 1; i <= x; i++) {
        bool found = false;
        for (int j = 1; j < k; j++) {
            if (arr[i] == arr2[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            arr2[k] = arr[i];
            k++;
        }
    }
    for (int i = 1; i <= x; i++) cout << arr2[i] << endl;
    return 0;
}
