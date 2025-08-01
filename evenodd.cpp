#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int main() {
    speed;
    ll x, c;
    cin >> x >> c;
    ll oddCount = (x + 1) / 2; 
    ll evenCount = x / 2;      
    if (c <= oddCount) {
        cout << 2 * (c - 1) + 1 << "\n";
    } else {
        c -= oddCount;
        cout << 2 * c << "\n";
    }
    return 0;
}
