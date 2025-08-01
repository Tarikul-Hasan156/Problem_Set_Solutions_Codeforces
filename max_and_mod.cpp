#include <bits/stdc++.h>
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    speed;
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin>>n;
        if (n%2==0)
        cout<<"-1"<<endl;
        else
        {
            cout<<n<<sp;
            for (int i=1;i<=n-1;i++)cout<<i<<sp;
            cout<<endl;
        }
    }
    return 0;
}
