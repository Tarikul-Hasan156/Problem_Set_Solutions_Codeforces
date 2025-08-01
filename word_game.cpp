#include <bits/stdc++.h>
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define sp " "
#define forn(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int check_string(string s, vector<pair<string, int>> &freq)
{
    int l = 0, r = freq.size() - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (freq[mid].first == s)
            return freq[mid].second;
        if (freq[mid].first < s)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return 0;
}

void solve()
{
    int x;
    cin >> x;
    cin.ignore();

    vector<string> v1, v2, v3;
    string s1, s2, s3, temp;

    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);

    stringstream ss1(s1), ss2(s2), ss3(s3);
    while (ss1 >> temp)
        v1.push_back(temp);
    while (ss2 >> temp)
        v2.push_back(temp);
    while (ss3 >> temp)
        v3.push_back(temp);

    vector<string> all_words = v1;
    all_words.insert(all_words.end(), v2.begin(), v2.end());
    all_words.insert(all_words.end(), v3.begin(), v3.end());

    sort(all_words.begin(), all_words.end());

    vector<pair<string, int>> freq;

    for (int i = 0; i < all_words.size();)
    {
        int j = i;
        while (j < all_words.size() && all_words[j] == all_words[i])
            j++;
        freq.push_back({all_words[i], j - i});
        i = j;
    }

    int cnt1 = 0, cnt2 = 0, cnt3 = 0;

    forn(i, x)
    {
        int f = check_string(v1[i], freq);
        if (f == 1)
            cnt1 += 3;
        else if (f == 2)
            cnt1 += 1;
    }

    forn(i, x)
    {
        int f = check_string(v2[i], freq);
        if (f == 1)
            cnt2 += 3;
        else if (f == 2)
            cnt2 += 1;
    }

    forn(i, x)
    {
        int f = check_string(v3[i], freq);
        if (f == 1)
            cnt3 += 3;
        else if (f == 2)
            cnt3 += 1;
    }

    cout << cnt1 << sp << cnt2 << sp << cnt3 << endl;
}

int main()
{
    speed;
    int tt;
    cin >> tt;
    cin.ignore();
    while (tt--)
    {
        solve();
    }
    return 0;
}
