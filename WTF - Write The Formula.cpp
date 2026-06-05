//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e5+9;
ll LCM(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}
void solve ()
{
    ll n; cin >> n;
    ll lcm = 1;
    for (int i = 2; i < 10; i++) {
        lcm = LCM (lcm, i);
    }
    cout << n / lcm << endl;
}

int main ()
{
    speed;
    solve();
    return 0;
}