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
#define nl "\n"
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
int main()
{
    speed;
    int arr[9][9];
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
        {
            cin >> arr[i][j];
        }
    for (int i = 0; i < 9; i++)
    {
        int sum = 0;
        for (int j = 0; j < 9; j++)
        {
            // if((arr[i][j] == arr[i][j+1]) || (arr[i][j] == arr[]))
            sum += arr[i][j];
        }
        if (sum != 45)
        {
            // cout << no << nl;
            no return 0;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        int sum = 0;
        for (int j = 0; j < 9; j++)
        {
            sum += arr[j][i];
        }
        if (sum != 45)
        {
            // cout << no << nl;
            no return 0;
        }
    }
    yes
}