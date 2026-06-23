//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e5+9;

void solve ()
{
    int n; cin >> n;
    int a[n + 1];
    for (int i = 1 ; i <= n; i++) {
        cin >> a[i];
    }
    sort (a+1, a+n+1);
    int g = 0;
    for (int i = 1; i <= n; i++) {
        g = __gcd (g, a[n]-a[i]);
    }
    ll ans = 0;
    for (int i = 1; i < n; i++) {
        ans += (a[n]- a[i]) / g;
    }
    cout << ans << sp << g << endl;
}

int main ()
{
    speed;
    solve();
    return 0;
}