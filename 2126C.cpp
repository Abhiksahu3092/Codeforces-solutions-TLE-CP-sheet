#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(){
    ll n,k;
    cin>>n>>k;

    vector<ll> h(n);
    for(ll i = 0; i < n; i++){
        cin >> h[i];
    }

    ll h_start = h[k-1];
    sort(h.begin(),h.end());

    ll idx =-1;
    for(ll i=0;i<n;i++){
        if(h[i]==h_start){
            idx = i;
        }
    }

    ll wh=1;
    if(idx == n-1){
        return true;
    }

    idx =idx+1;
    while(idx<n){
        if(h[idx]-h[idx-1]<=(h[idx-1]+1 -wh)){
            wh+=(h[idx]-h[idx-1]);
            idx++;
        }
        else{
            return false;
        }
    }

    return true;

        
}

int main(){
    int t;
    cin>>t;
    while(t--){
        if(solve()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}