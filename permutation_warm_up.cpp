#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n;
    cin >> n;
   int result=((((n*n)/2)+1)/2);
   cout<<result+1<<endl;
}

int main() {
    speed;
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
