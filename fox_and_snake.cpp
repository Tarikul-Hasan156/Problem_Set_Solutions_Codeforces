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
#define sp " "
#define forn(i, n) for (int i = 0; i < (n); i++)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define maxelementofvector *max_element(digit.begin(),digit.end());
using namespace std;
int main ()
{
    speed;
    bool target=true;
    int row,col;
    cin>>row>>col;
    for (int i=1;i<=row;i++)
    {
        if (i%2==0)
        {
            if (target)
            {
                for (int i=0;i<col-1;i++)
            {

                cout<<'.';
            }
            cout<<"#"<<endl;
            target=false;
            }else
            {
                cout<<"#";
                for (int i=1;i<col;i++)
                {
                    cout<<".";
                }
                target=true;
                cout<<endl;
            }

        }else
        {
            for (int i=0;i<col;i++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
    }

    return 0;
}