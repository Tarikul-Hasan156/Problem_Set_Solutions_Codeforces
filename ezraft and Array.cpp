//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=(ll) 1e17;
#define i128 __int128;
void solve ()
{
    int n; cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    if (n == 2) {
        cout << -1 << endl;
        return;
    }
    ll ans = 6;
    for (int i = 1; i < 4; i++){
        cout << i << sp;
    }
    for (int i = 1; i <= n-3; i++) {
        cout << ans << sp;
        ans = ans * 2;
    }
    cout << endl;
}

int main ()
{
    speed;
    int tt; cin >> tt;
    while (tt--) {
        solve ();
    }
    return 0;
}