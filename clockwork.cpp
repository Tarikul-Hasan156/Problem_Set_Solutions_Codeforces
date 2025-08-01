#include <bits/stdc++.h>
#define sortarray sort(arr, arr + n);
#define sp " "
#define forn(i, n) for (int i = 0; i < (n); i++)
#define speed ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

int main()
{
    speed;
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        bool valid = true;
        for (int i = 0; i < n; i++)
        {
            int d = max(i, n - 1 - i); 
            if (arr[i] <= 2 * d)
            {
                valid = false;
                break;
            }
        }

        if (valid)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
