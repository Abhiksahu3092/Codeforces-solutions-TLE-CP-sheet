#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n,q;
    cin>>n>>q;

    vector<int> a(n);
    vector<int> mp(51,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(mp[a[i]]==0){
            mp[a[i]]=i+1;
        }
    }

    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        cout<<mp[x]<<" ";
        for(int j=1;j<=50;j++){
            if(mp[j]<mp[x]){
                mp[j]++;
            }
        }
        mp[x]=1;
    }
    cout<<endl;
}

int main(){
    solve();
}