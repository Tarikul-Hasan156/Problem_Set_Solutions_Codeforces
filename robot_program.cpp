#include <bits/stdc++.h>
using namespace std;

#define speed ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

int main() {
    speed;
    int c;
    cin >> c;
    
    while (c--) {
        ll length, point, ex_time, cnt = 0;
        cin >> length >> point >> ex_time;
        string s1;
        cin >> s1;

        for (int i=0;i<s1.length() && ex_time>0;i++)
        {
            if(s1[i]=='L')
            {
                point--;
                ex_time--;

            }else
            {
                point--;
                ex_time--;
            }
            if (point ==0)
            {
                cnt++;
                i=0;
            }
        }
        cout << cnt << endl;
        cnt=0;
    }

    return 0;
}
