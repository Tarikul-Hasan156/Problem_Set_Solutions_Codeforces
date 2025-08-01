#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;


vector<string> vec;
vector<int> counts;

void check(string &s1) {
    for (size_t i = 0; i < vec.size(); i++) {
        if (vec[i] == s1) {
            cout << vec[i] << counts[i] << endl;
            counts[i]++;
            return;
        }
    }
    vec.push_back(s1);
    counts.push_back(1);
    cout << "OK" << endl;
}

int main() {
    speed;
    int c;
    cin >> c;
    while (c--) {
        string s1;
        cin >> s1;
        check(s1);
    }
    return 0;
}
