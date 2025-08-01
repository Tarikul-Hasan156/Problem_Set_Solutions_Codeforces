#include <bits/stdc++.h>
// #include <string>
// #include <sstream>
// #include<set>
// #include<iomanip>
// #include<cstring>
// #include<cctype> //islower () issuper () for check the first char
// #include<algorithm>
// #include<cmath>
#define sortarray sort(arr, arr + x);
// #define rev reverse(s1.begin(), s1.end());
// #define uppertolowers1 transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
// #define uppertolowers2 transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
// #define descsort sort(arr, arr + n, greater<int>());
#define sp " "
#define forn(i, n) for (int i = 0; i < (n); i++)
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
#define maxelementofvector *max_element(digit.begin(), digit.end());
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
void solve()
{
    int boys, girls;
    cin >> boys;
    vector<int> vv(boys);
    for (int i = 0; i < boys; i++)
        cin >> vv[i];

    cin >> girls;
    vector<int> gg(girls);
    for (int i = 0; i < girls; i++)
        cin >> gg[i];

    sort(vv.begin(), vv.end());
    sort(gg.begin(), gg.end());

    int cnt = 0;
    vector<bool> used(girls, false); 

    for (int i = 0; i < boys; i++)
    {
        for (int j = 0; j < girls; j++)
        {
            if (!used[j] && abs(vv[i] - gg[j]) <= 1)
            {
                cnt++;
                used[j] = true; 
                break; 
            }
        }
    }

    cout << cnt << endl;
}

int main()
{
    speed;
    // int tt;
    // cin>>tt;
    // while (tt--)
    // {
    solve();
    // }
    return 0;
}