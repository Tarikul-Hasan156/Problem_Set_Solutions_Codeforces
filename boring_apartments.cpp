#include <bits/stdc++.h>
// #include <string>
// #include <sstream>
// #include<set>
// #include<iomanip>
// #include<cstring>
// #include<cctype> //islower () issuper () for check the first char
// #include<algorithm>
// #include<cmath>
#define sortarray sort(arr,arr+x);
// #define rev reverse(s1.begin(), s1.end());
// #define uppertolowers1 transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
// #define uppertolowers2 transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
// #define descsort sort(arr, arr + n, greater<int>());
#define sp " "
#define forn(i, n) for (int i = 0; i < (n); i++)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define maxelementofvector *max_element(digit.begin(),digit.end());
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void solve ()
{
    string s;
    cin>>s;
    int size=s.size();
    int result=0;
    if(size==1)
    result+=1;
    else if (size==2)
    result+=3;
    else if(size==3)
    result+=6;
    else 
    result+=10;

    int num=stoi(s);
    if (num==1)
    cout<<1<<endl;
    else 
    {
        int temp=num%10;
        cout<<((temp-1)*10)+result<<endl;
    }

}
int main ()
{
    speed;
    int tt;
    cin>>tt;
    while (tt--)
    {
        solve ();
    }
    return 0;
}