#include<bits/stdc++.h>
using namespace std;
int find(int s, int k, int a)
{
    while (s > 1)
    {
        a++;
        s = (s + 1) / 2;
    }
    while (k > 1)
    {
        a++;
        k = (k + 1) / 2;
    }
    return a;
}
 void solve ()
 {
    int n, m, a, b;
        cin >> n >> m >> a >> b;
        int res = 1e10;
        res = min(res, find(n, b, 1));
        res = min(res, find(n, m - abs(b - 1), 1));
        res = min(res, find(a, m, 1));
        res = min(res, find(n - abs(a - 1), m, 1));
        cout << res << endl;
 }
int  main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}