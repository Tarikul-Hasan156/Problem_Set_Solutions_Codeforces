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
    vector<int> v (n+2), temp(n+2), vv (n+2);
    v[0] = -1; 
    v[n+1] = -1;
    for (int i = 1; i <= n; i++) cin >> v[i];
    vv = v;
    sort(vv.begin() + 1, vv.end()-1);
    if (n & 1) {
        cout <<"NO" << endl;
        return;
    }
    int size = n/2;
    if (vv[size] == vv[size+1] - 1) {
        cout << "NO" << endl;
    }else {
        int val = v[size] + 1;
        for (int i = 1; i <= n; i++) {
            // cout << i << sp;
            int cnt = 0;
            if (v[i] > val) {
                temp[i+1] = v[i];
                cnt++;
            }else {
                temp[i-1] = v[i];
            }
            // cout << cnt << endl;
        }
        // for (int i = 1; i <= n; i++) {
        //     cout << temp[i] << sp;
        // }
        // cout << endl;
        set<int>se;
        for (int i = 1; i <= n; i++) {
            if ((temp[i] == -1) or (se.count(temp[i]))) {
                cout << "NO" << endl;
                return;
            }
            se.insert(temp[i]);
        }
        cout << "YES" << endl;
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