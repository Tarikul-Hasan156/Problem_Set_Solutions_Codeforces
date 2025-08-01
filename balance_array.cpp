#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp " "
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;

int main() {
    speed;
    int tt;
    cin >> tt;
    while (tt--) {
        int x;
        cin >> x;
        if ((x / 2) % 2 != 0) {  
            no;
            continue;
        }
        yes;
        vector<int> even, odd;
        int evennum = 2, oddnum = 1;
        int sumeven = 0, sumodd = 0;

        for (int i = 0; i < x / 2; i++) {
            even.push_back(evennum);
            sumeven += evennum;
            evennum += 2;
        }
        for (int i = 0; i < (x / 2) - 1; i++) {
            odd.push_back(oddnum);
            sumodd += oddnum;
            oddnum += 2;
        }
        odd.push_back(sumeven - sumodd);
        for (int i = 0; i < x / 2; i++) cout << even[i] << sp;
        for (int i = 0; i < x / 2; i++) cout << odd[i] << sp;
        cout << endl;
    }
    return 0;
}
