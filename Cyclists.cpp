//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e5+9;

void solve()
{
    int n,k,p,m;cin>>n>>k>>p>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    deque<int>de;
    for(int i=0;i<n;i++)de.push_back(i);
    int ans=0;
    while(1){
        int pos=-1;
        for(int i=0;i<k;i++){
            if(de[i]==p-1){
                pos=i;
                break;
            }
        }
        if(pos!=-1){
            if(m<a[p-1])break;
            m-=a[p-1];
            ans++;
            de.erase(de.begin()+pos);
            de.push_back(p-1);
        }
        else{
            int target=-1;
            for(int i=0;i<k;i++){
                if(de[i]!=p-1){
                    if(target==-1 or a[de[i]]<a[de[target]])target=i;
                }
            }
            if(target==-1 or m<a[de[target]])break;
            m-=a[de[target]];
            int card=de[target];
            de.erase(de.begin()+target);
            de.push_back(card);
        }
    }

    cout<<ans<<endl;
}

int main()
{
    speed;
    int tt;
    cin>>tt;
    while(tt--)
    {
        solve();
    }
    return 0;
}