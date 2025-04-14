#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<vector<ll>> g(n,vector<ll>(n,0));

    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cin>>g[i][j];
        }
    }

    vector<ll> ans(2*n,0);
    ll index=1;
    vector<bool> m(2*n+1,false);
    for(ll i=0;i<n;i++){
        ans[index]=g[0][i];
        m[g[0][i]]=true;
        index++;
    }

    for(ll j=1;j<n;j++){
        ans[index]=g[j][n-1];
        m[g[j][n-1]]=true;
        index++;
    }

    for(ll i=1;i<=2*n;i++){
        if(!m[i]){
            ans[0]=i;
            break;
        }
    }

    for(ll i=0;i<2*n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}