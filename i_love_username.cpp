#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,a;
    while(cin>>m)
    {
        // cout<<m<<"M"<<endl;
        cin >> a;
        m--;
        int Max = a;
        int Min = a;
        int cnt = 0;
        while(m--)
        {
            cin>>a;
            if(a > Max)
            {
                Max = a;
                cnt++;
            }
            if(a < Min)
            {
                Min = a;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}