#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include<set>
#include<cstring>
#include<cctype> //islower () issuper () for check the first char
#include<algorithm>
#include<cmath>
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
    int x,k=0,c=0,group=0;
    char magent;
    cin>>x;
    string arr[x];
    for (int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<x;i++)
    {
        
        // cout<<arr[i]<<endl;
        if (arr[i]=="10")
        {
            // cout<<"Enter"<<arr[i]<<endl;

            if (k>0)
            {
                group++;
                k=0;
                // cout<<group<<"group"<<endl;
            }
            c++;
        }
        else if (arr[i]=="01")
        {
            // cout<<"second"<<arr[i]<<endl;
            if (c>0)
            {
                group++;
                c=0;
                // cout<<group<<"group"<<endl;
            }
                k++;
        }
        
    }
    cout<<group+1<<endl;
    return 0;
}