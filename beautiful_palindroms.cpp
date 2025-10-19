    //بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
    #include <bits/stdc++.h>
    #define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #define ll int64_t
    #define sp " "
    #define endl '\n'
    using namespace std;
        
    void solve ()
    {
        ll x, k;cin>>x>>k;
        vector<ll>vv(x);
        vector<bool>hash(x+1,true);
        for (int i=0;i<x;i++){
            cin>>vv[i];
            hash[vv[i]]=false;
        }
        vector<ll>miss;
        for (int i=1;i<=x;i++){
            if (hash[i])miss.push_back(i);
        }
        if (miss.size()>=k){
            for (int i=0;i<k;i++)cout<<miss[i]<<sp;cout<<endl;
            return;
        }
        set<ll>st(vv.begin(),vv.end());
        if (st.size()==vv.size()){
            for (int i=0;i<k;i++){
                cout<<vv[i%3]<<sp;
            }
            cout<<endl;
            return;
        }
        vector<ll>final={miss[0]};
        // for (int i=0;i<miss.size();i++)final.push_back(miss[i]);
        // sort(vv.begin(),vv.end());
        // final.push_back(vv.front());
        for (int i=1;i<=x;i++){
            // bool flag=true;
            // for (int j=0;j<final.size();j++){
            //     if (vv[i]==final[j]){flag=false;break;}
            // }
            if (i!=final[0] and i!=vv.back()){final.push_back(i);break;}
        }
        // for (auto &x:final)cout<<x<<sp;cout<<endl;
        final.push_back(vv.back()); 
        ll cnt=0;
        for (int i=0;i<k;i++){
            cout<<final[cnt]<<sp;
            cnt++;
            if (cnt==final.size())cnt=0;
        }
        cout<<endl;

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