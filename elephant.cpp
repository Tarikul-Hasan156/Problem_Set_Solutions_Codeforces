#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include<set>
#include<cctype> //islower () issuper () for check the first char
#include<algorithm>
#include<cmath>
#define uppertolowers1 transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
#define uppertolowers2 transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main ()
{
    speed;
        ll int x;
        cin>>x;
        ll int c=0;
        


if (x >= 5) {
    c += x / 5;
    x %= 5;
}
if (x >= 4) {
    c += x / 4;
    x %= 4;
}
if (x >= 3) {
    c += x / 3;
    x %= 3;
}
if (x >= 2) {
    c += x / 2;
    x %= 2;
}
if (x >= 1) {
    c += x;
}



        
        cout<<c<<endl;


    return 0;
}