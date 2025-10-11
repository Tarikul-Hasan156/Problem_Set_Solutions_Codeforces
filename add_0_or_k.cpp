// بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;

void solve()
{
    ll x, k;
    cin >> x >> k;
    vector<ll> vv(x);
    for (auto &x : vv)
        cin >> x;
    if (x == 1)
    {
        cout << vv[0] + k << endl;
        return;
    }
    if (k & 1)
    {
        for (int i = 0; i < x; i++)
        {
            if (vv[i] & 1)
            {
                for (int j = 0; j < k; j++)
                {
                    vv[i] += k;
                    if (vv[i] % 2 == 0)
                        break;
                }
            }
        }
        for (auto &x : vv)
            cout << x << sp;
        cout << endl;
        return;
    }
    for (int i=0;i<x;i++)
    {
        vv[i]=vv[i]+k*(vv[i]%(k+1));
    }
    // else
    // {
    //     if (__gcd(vv[0],vv[1])==1)
    //     {
    //         for (int j = 0; j < k; j++)
    //         {
    //             vv[0] += k;
    //             if (__gcd(vv[0], vv[ 1]) > 1)
    //             {
    //                 break;
    //             }
    //         }
    //         if (__gcd(vv[0],vv[1])==1)
    //         {
    //             for (int j = 0; j < k; j++)
    //             {
    //                 vv[ 1] += k;
    //                 if (__gcd(vv[0], vv[ 1]) > 1)
    //                 {
    //                     break;
    //                 }
    //             }
    //         }
           
    //     }
    //         for (int i=1;i<x-1;i++)
    //         {
    //             if (__gcd(vv[i],vv[i+1])==1)
    //             {
    //                 for (int j=0;j<k;j++)
    //                 {
    //                     vv[i+1]+=k;
    //                     // cout<<vv[i+1]<<endl;
    //                     if (__gcd(vv[i],vv[i+1])>1)break;
    //                 }
    //             }
    //         } 
        for (auto &x : vv)
            cout << x << sp;
        cout << endl;
    // }
}
int main()
{
    speed;
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}