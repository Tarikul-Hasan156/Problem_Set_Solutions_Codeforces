
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e5+9;

void solve ()
{
    int n, c; cin >> n >> c;
    vector<int> a (n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a.begin()+1, a.end());
    int range = 0;
    for (int i = 1; i <= n; i++) {
        if (c <= a[i]) {
            range = i;
            break;
        }
    }
    if (n == 1) {
        cout << a[1] - c << endl;
        return;
    }
    if (c <= a[1]) {
        ll ans = 0;
        for (int i = 1; i <= n; i++) {
            ans += a[i];
            ans -= c;
        }
        cout << ans << endl;
    }else if (c > a[n]) {
        ll ans = 0;
        int l = 1, r = n;
        while (l < r) {

            int sz = r - l + 1;
            if (sz > 1) {
                ans += max(a[l], a[r]);
                ans -= c;
                l++, r--;
            }else {
                ans += a[l];
                ans -= c;
                cout << ans << endl;
                return;
            }
            // if (l == r) {
            //     ans += a[l];
            //     break;
            // }else {
            //     ans += max(a[l], a[r]);
            //     ans -= c;
            //     l++, r--;
            // }
        }
        if (l == r) {
            ans += a[l];
            ans -= c;
        }
        cout << ans << endl;
    }else {
        ll ans = 0;
        int l = 1, r = n; 
        while (l < r) {
            int sz = r - l + 1;
            if (sz > 1) {
                if (l >= range) {
                    for (int i = l; i <= r; i++) {
                        ans += a[i];
                        ans -= c;
                    }
                    cout << ans << endl;
                    return;
                }else {
                    ans += max (a[l], a[r]);
                    ans -= c;
                    l++, r--;
                }
            }else {
                ans += a[l];
                ans -= c;
                cout << ans << endl;
                return;
            }
                
        }
        if (l == r) {
            ans += a[l];
            ans -= c;
        }
        cout << ans << endl;
    }
    
}

int main ()
{
    speed;
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}