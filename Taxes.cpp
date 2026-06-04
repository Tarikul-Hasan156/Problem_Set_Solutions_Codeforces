//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e5+9;
bool is_prime (int n) {
    // if (n == 1) return false;
    if (n < 4) return true;
    // if (n % 2 == 0) return false;
    for (int i = 2; 1LL*i*i <= n; i++) {
        if (n % i == 0) {
            // cout << i << endl;
            return false;
        }
    }
    return true;
}
void solve ()
{
    int n; cin >> n;
    if (n == 2 ) {
        cout << 1 << endl; return;
    }else if (n % 2 == 0) {
        cout << 2 << endl; return;
    }
    if (is_prime(n)) {
        cout << 1 << endl; return;
    }
    // cout << n - 11 << endl;
    // cout << is_prime (n-11) << endl;
    int x = n;
    int ans = 0;
    while (1) {
        if (is_prime(x)) {
            int temp = n - x;
            if (temp == 0) {
                cout << min(++ans, 3) << endl; return;
            }else if (temp == 1) {
                x--;
                continue;
            }else {
                // cout << x << endl;
                ans++;
                x = temp;
                n = x;
            }
        }else x--;
    }
    cout << ans << endl;
}

int main ()
{
    speed;
    solve();
    return 0;
}