//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=2e5+9;
int a[N];
void solve ()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        ll val = 1LL*i*(i+1)/2;
        sum += a[i];
        if (sum < val){
            cout <<"NO"<< endl;
            return;
        }
    }
    cout <<"YES"<< endl;
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