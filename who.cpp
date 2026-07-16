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
    int n, k; cin >> n >> k;
    cin.ignore();
    string s; cin >> s;
    if (2*k > n) {
        cout << -1 << endl;
        return;
    }else {
        int cnt = 0, temp = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'L') {
                cnt++;
                s[i] = 'R';
            }
        }
        reverse(s.begin(), s.end());
        for (int i = 0; i < k; i++) {
            if (s[i]=='R') {
                cnt++;
                s[i] = 'L';
            }
        }
        cout << cnt << endl;
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