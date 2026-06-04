//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e5+9;
int spf[N];
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15ULL;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9ULL;
        x = (x ^ (x >> 27)) * 0x94d049bb133111ebULL;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM =
            chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
void calculate_spf () {
    spf[1] = 1;
    for (int i = 2; i < N; i++) spf[i] = i;
    for (int i = 2; i < N; i++) {
        if (spf[i] == i) {
            for (int j = i; j < N; j += i){
                spf[j] = min (spf[j], i);
            }
        }
    }
}
void solve ()
{
     int n; cin >> n;
     unordered_map<int, int, custom_hash> mp;
     for (int i = 1; i <= n; i++) {
        int val; cin >> val;
        // if (val == 1) {
        //     mp[val]++;
        //     continue;
        // }
        set<int> se;
        while (val > 1) {
            // if (!se.count(spf[val]))
           se.insert(spf[val]);
        //    else
            val /= spf[val];
        }
        for (auto val:se){
            mp[val]++;
        }
     }
     int ans = INT_MIN;
     for (auto[key, cnt]: mp) {
        ans = max (cnt, ans);
     }
     cout << max(ans,1) << endl;
}

int main ()
{
    speed;
    calculate_spf ();
    solve();
    return 0;
}