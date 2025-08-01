#include <bits/stdc++.h>
using namespace std;

bool canTransform(string a, string b) {
    if (a.size() > b.size()) return false;
    
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] != b[j]) return false;
        int countA = 1;
        while (i + 1 < a.size() && a[i] == a[i+1]) {
            countA++;
            i++;
        }
        int countB = 1;
        while (j + 1 < b.size() && b[j] == b[j+1]) {
            countB++;
            j++;
        }
        if (countB < countA || countB > 2 * countA) {
            return false;
        }
        
        i++;
        j++;
    }
    return (i == a.size() && j == b.size());
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt;
    cin >> tt;
    while (tt--) {
        string a, b;
        cin >> a >> b;
        cout << (canTransform(a, b) ? "YES" : "NO") << "\n";
    }
    return 0;
}