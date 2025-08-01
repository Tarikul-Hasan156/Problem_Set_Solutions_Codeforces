#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include<iomanip>
#include<set>
#include<cstring>
#include<cctype> //islower () issuper () for check the first char
#include<algorithm>
#include<cmath>
#define sortarray sort(arr,arr+x);
#define rev reverse(s1.begin(), s1.end());
#define uppertolowers1 transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
#define uppertolowers2 transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main ()
{
    speed;
    int x;
    cin>>x;
    int sum=0;
    
    for (int i=1;i<=x;i++)
    {
        int y;
        cin>>y;
        sum+=y;
        // cout<<sum<<endl;
    }
    double result=static_cast<double>(sum)/x;
    // printf("%lf\n",result);
    cout<<fixed<<setprecision(12)<<result<<endl;
    return 0;
}