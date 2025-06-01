#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll count(ll k, vector<vector<ll>>& v){
    ll n = v.size();
    vector<ll> temp;
    for(ll i=0;i<n;i++){
        temp.push_back(v[i][k]);
    }

    sort(temp.begin(), temp.end());
    ll i=n-1;
    ll ans=0;
    while(i>=0){
        ans+=(i*temp[i]-(n-1-i)*temp[i]);
        i--;
    }

    return ans;
}

ll solve(){
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> v(n,vector<ll>(m));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>v[i][j];
        }
    }


    ll ans=0;
    for(ll k=0;k<m;k++){
        ans+=count(k,v);
    }

    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}