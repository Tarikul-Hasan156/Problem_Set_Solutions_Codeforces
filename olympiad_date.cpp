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
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main ()
{
    speed;
    int tt;
    cin>>tt;
    while (tt--)
    {
        int x;
        int zero=3,one=1,two=2,five=1,three=1;
        int last=8;
        cin>>x;
        int arr[x];
        for (int i=0;i<x;i++)cin>>arr[i];
        
        for (int i=0;i<x;i++)
        {
            if (arr[i]==0 && zero!=0)
            {
                
                zero--;
                last--;
                if (last==0)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }else if (arr[i]==1 && one!=0)
            {
                one--;
                last--;
                if (last==0)
                {
                    cout<<i+1<<endl;
                    break;
                }
            } else if (arr[i]==2 && two!=0)
            {
                two--;
                last--;
                if (last==0)
                {
                    cout<<i+1<<endl;
                    break;
                }
            } else if (arr[i]==3 && three!=0)
            {
                three--;
                last--;
                if (last==0)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }else if (arr[i]==5 && five!=0)
            {
                if  (five!=0){
                    five--;
                    last--;
                }
                
                if (last==0)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }

        }   
        
        if (last!=0)
        {
            cout<<"0"<<endl;
        }
    }
    

    return 0;

}