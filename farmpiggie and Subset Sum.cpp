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
    int k = 1, j = 2;
    for (int i = 1; i <= n; i++) {
        if (i&1) {
            cout << j << sp;
            j+=2;
        }else {
            cout << k << sp;
            k += 2;
        }
    }
    cout << endl;
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