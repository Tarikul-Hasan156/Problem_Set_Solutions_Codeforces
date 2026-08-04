#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve()
{
    int x; cin >> x;
    string s; cin >> s;
    int ans = 1;
    for (int i = 1; i < x; i++) {
        if (s[i] != s[i - 1])
            ans++;
    }
    int res = ans;
    for (int i = 1; i < x - 1; i++) {
        int cur = ans;

        if (s[i - 1] == s[i + 1]) {
            if (s[i] != s[i - 1])
                cur -= 2;
        }
        else  {
            if (s[i] != s[i - 1] and s[i] != s[i + 1])
                cur--;
        }

        res = min(res, cur);
    }
    cout << res << endl;
}

int main()
{
    speed;
    int tt;
    cin >> tt;
    while (tt--){
        solve();
    }
    return 0;
}