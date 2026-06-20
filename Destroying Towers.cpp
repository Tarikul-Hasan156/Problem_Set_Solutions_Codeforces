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
    int ans = 0;
    int mn;
    int n; cin >> n;
    cin >> mn;
    ans = mn;
    for (int i = 2; i <= n; i++) {
        int val; cin >> val;
        if (val > mn) {
            ans += mn;
        }else {
            ans += val;
            mn = min (mn, val);
        }

    }
     cout << ans << endl;
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