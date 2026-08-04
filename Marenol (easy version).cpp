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
    int x; cin >> x;
    string a, b; cin >> a >> b;
    int ae = 0, ao = 0;
    int be = 0, bo = 0;
    for (int i = 0; i < x; i++) {
            if (i % 2 == 0) {
                if (a[i] == '1') ae++;
                if (b[i] == '1') be++;
            } else {
                if (a[i] == '1') ao++;
                if (b[i] == '1') bo++;
            }
        }
      if (ae == be and ao == bo) {
           cout <<"YES" << endl;
     }else {
        cout <<"NO" << endl;
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