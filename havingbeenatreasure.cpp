#include<iostream>
#include<algorithm>
#include<cmath>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using  namespace std;
int main()
{
    speed
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string c;
        cin >> c;
        ll a = 0, b = 0;
        for(int i = 0; i < n; i++)
        {
            if(c[i] == '-')
            {
                a++;
            }
            else{
                b++;
            }
        }
        ll r = (a / 2) * (a - (a/2)) * b;
        cout << r << endl;
    }
}