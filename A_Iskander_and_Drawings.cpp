 //بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 #include <bits/stdc++.h>
 #define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 #define ll long long
 #define sp ' '
 #define endl '\n'
 using namespace std;
 const ll N=1e5+9;
 
 void solve ()
 {
     int n; cin >> n;
     cin.ignore();
     string s; cin >> s;
     vector<int>v;
     int cnt = 0;
     for (int i = 0; i < n; i++) {
        if (s[i] == '#'){
            cnt++;
        }else {
            v.push_back(cnt);
            cnt = 0;
        }
     }
     if (cnt > 0) {
        v.push_back(cnt);
     }
     int ans =0;
     for (auto x:v) {
        ans = max(ans,x);
     }
     cout << ceil(ans/2.0) << endl;
 }
 
 int main ()
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