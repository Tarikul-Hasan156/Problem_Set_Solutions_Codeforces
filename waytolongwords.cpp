#include <bits/stdc++.h>
#include <string>
#include <sstream>
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    speed;
    int x;
    cin >> x;
    while (x--)
    {
        string y;
        cin >> y;
        if (y.size() <= 10)
            cout << y <<endl;
        else
        {
            int l = y.size() - 2;
            stringstream ss(y);
            string word;
            while (ss >> word)
            {

                cout << word[0] << l << word[word.length() - 1] <<endl;
            }
        }
    }
    return 0;
}