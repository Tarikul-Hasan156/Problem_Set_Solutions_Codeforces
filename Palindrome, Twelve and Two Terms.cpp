//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;

void solve ()
{
    ll n; cin >> n;
    int val = n % 12;
    if (val == 10) {
        if (n >= 22) {
            cout << 22 << sp << n - 22 << endl;
        }else {
            cout << -1 << endl;
        }
    }else {
        cout << val << sp << n - val << endl;
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