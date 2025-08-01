#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include<algorithm>
#include<cmath>
#define uppertolowers1 transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
#define uppertolowers2 transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main() {
    string s1;
    cin >> s1;
    string digits = "";
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] >= '0' && s1[i] <= '9') {
            digits += s1[i];
        }
    }
    sort(digits.begin(), digits.end());
    string result = "";
    for (int i = 0; i < digits.length(); i++) {
        result += digits[i];
        if (i < digits.length() - 1) {
            result += '+';
        }
    }
    cout << result << endl;
}