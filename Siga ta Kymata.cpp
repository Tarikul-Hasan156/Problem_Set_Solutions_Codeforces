    //بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
    #include <bits/stdc++.h>
    #define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #define ll int64_t
    #define sp " "
    #define endl '\n'
    using namespace std;
    const ll N=1e5+7;    
    void solve ()
    {
        ll x;cin>>x;
        vector<ll>vv(x+1);
        for (int i=1;i<=x;i++)cin>>vv[i];
        string temp;cin>>temp;
        string s=' '+temp;
        // for (int i=0;i<temp.size();i++){
        //     s.push_back(temp[i]);
        // }
        // sort(temp.begin(),temp.end());
        if (temp[0]=='1' or temp[temp.size()-1]=='1'){
            cout<<-1<<endl;
            return;
        }
        // vector<ll>index(N,0);
        // for (int i=1;i<=x;i++){
        //     if (index[vv[i]]==0)
        //     index[vv[i]]=i;
        // }
        for (int i=1;i<=x;i++){
            if (s[i]=='1' and (vv[i]==1 or vv[i]==x)){
                cout<<-1<<endl;
                return;
            }
        }

        // vector<ll>mn(x+1,N),mx(x+2,0);
        // mn[1]=vv[1],mx[x]=vv[x];
        // for (int i=1;i<=x;i++){
        //     mn[i]=min(mn[i-1],vv[i]);
        // }
        // for (int i=x-1;i>=1;i--){
        //     mx[i]=max(mx[i],mx[i+1]);
        // }
        // for (auto &x:mn)cout<<x<<sp;cout<<endl;
        // for (auto &x:mx)cout<<x<<sp;cout<<endl;
        vector<pair<ll,ll>>pr;
        bool flag=false;
        for (int i=1;i<=x;i++){
            if (s[i]=='1'){
                flag=true;
            }
        }
        if (!flag){
            cout<<0<<endl;
            return;
        }
        ll l=-1,r=-1;
        for (int i=1;i<=x;i++){
            if (vv[i]==1)l=i;
            if (vv[i]==x)r=i;
        }
        pr.push_back({1,x});
        if(r!=1)pr.push_back({1,r});
        if(l!=x)pr.push_back({l,x});
        if(l!=1)pr.push_back({1,l});
        if(r!=x)pr.push_back({r,x});
        // for (int i=2;i<s.size()-1;i++){
        //     if (s[i]=='1'){
        //         if (mn[i]<vv[i] and vv[i]<mx[i]){
        //             if (s[mn[i]]=='1' or s[mx[i]]=='1'){
        //                 cout<<-1<<endl;
        //                 return;
        //             }
        //             pr.push_back({index[mn[i]],index[mx[i]]});
        //         }
        //         else{
        //             cout<<-1<<endl;
        //             return;
        //         }
        //     }
        // }
        cout<<pr.size()<<endl;
        for (int i=0;i<pr.size();i++){
            cout<<pr[i].first<<sp<<pr[i].second<<endl;
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