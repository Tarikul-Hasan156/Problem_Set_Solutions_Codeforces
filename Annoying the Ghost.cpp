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
    int mx1 = INT_MIN, mx2 = INT_MIN;
    vector<int> v(n+1), v1(n+1);
    v[0] = 0, v1[0] = 0;
    map <int, int> mp;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        mp[v[i]] = i;
        mx1 = max (mx1, v[i]);
    }
    for (int i = 1; i <= n; i++) {
        cin >> v1[i];
        // mp[v1[i]] = i;
        mx2 = max (mx2, v1[i]);
    }
    if (mx1 > mx2) {
        cout << -1 << endl; return;
    }
    int ans = 0, ans1 = 0;
    bool flag = true;
    int i = 1;
    while (i <= n) {
        if (v1[i] >= v[i]) {
            // mp.erase(v[i]);
            v[i] = v1[i];
        }else {
            int i_small = 0;
            for (int j = i; j <= n; j++) {
                if (v1[i] >= v[j]) {
                    i_small = j;
                    v[i_small] = v1[i];
                    break;
                }
            }
            // if (it->first == v1[i]) {
                for (int j = i_small; j > i; j--) {
                    // mp[v[j]] = j-1;
                    // mp[v[j-1]] = j;
                    swap(v[j], v[j-1]);
                    ++ans;
                }
            // }else {
                // it--;
                // for (int j = it->second; j > i; j--) {
                //     mp[v[j]] = j-1;
                //     mp[v[j-1]] = j;
                //     swap(v[j], v[j-1]);
                //     ++ans;
                // }
            // }
        }
        i++;
    }
    for (int i = 1; i <= n; i++) {
        if (v[i] != v1[i]) {
            cout << -1 << endl; return;
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