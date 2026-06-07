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
    vector<int>a(n);
    for (int i = 0 ; i < n; i++) cin >> a[i];
    sort (a.rbegin(), a.rend());
    bool ok = true;
    for (int i = 1; i < n - 1; i++) {
        if (a[i-1] % a[i] != a[i+1]){
            cout << -1 << endl;return;
        }
    }
    cout << a[0] << sp << a[1] << endl;
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