#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(){
    ll n,x;
    cin>>n>>x;

    ll k=0;
    vector<vector<ll>> a(3,vector<ll>(n));
    for(ll i=0;i<3;i++){
        for(ll j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<3;i++){
        for(ll j=0;j<n;j++){
            ll t=a[i][j];
            if((x|t)==x){
                k=k|t;
            }
            else{
                break;
            }
        }
    }
    
    if(k==x){
        return true;
    }

    return false;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        if(solve()){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}