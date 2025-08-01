#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int main() {
    speed;
    ll n, m, a;
    cin >> n >> m >> a;
    ll tiles_in_width = (n + a - 1) / a;  
    ll tiles_in_height = (m + a - 1) / a; 
    ll total_tiles = tiles_in_width * tiles_in_height;
    cout << total_tiles << endl;
    return 0;
}
