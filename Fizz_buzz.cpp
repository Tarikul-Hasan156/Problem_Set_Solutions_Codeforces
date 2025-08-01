#include <bits/stdc++.h>
using namespace std;

#define speed ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

int main() {
    speed;
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll count = (n / 15) * 3;
        int rem = n % 15;
        if (rem >= 1) count++;
        if (rem >= 2) count++;
        cout << count+1 << '\n';
    }
    return 0;
}
