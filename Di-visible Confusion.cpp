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
    int a[n+1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        bool ok = false;
        for (int j = 1; j <= i; j++) {
            if (a[i] % (j+1) == 0) {
                ok = true;
            }else {
                ok = false;break;
            }
        }
        if (ok) {
            cout << "NO\n";
            return;
        }
    }
    cout <<"YES\n";
   
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