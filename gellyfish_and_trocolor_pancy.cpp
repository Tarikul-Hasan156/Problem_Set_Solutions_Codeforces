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
#define ll long long
#define maxelementofvector *max_element(digit.begin(), digit.end());
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int temp1 = min(a, c);
        int temp2 = min(b, d);
        // temp2--;
        if (temp1==temp2) cout << "Gellyfish" << endl;
        else if (temp1>temp2)cout << "Gellyfish" << endl;
        else cout << "Flower" << endl;
        // if (temp1==temp2 || temp1>temp2)
        //     cout << "Flower" << endl;
        // else
        //     cout << "Gellyfish" << endl;
    }
    return 0;
}