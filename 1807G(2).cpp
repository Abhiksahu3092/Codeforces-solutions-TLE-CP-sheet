#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    if(a[0]!=1){
        return false;
    }
    ll sum=1;
    for(ll i=1;i<n;i++){
        if(sum>=a[i]){
            sum+=a[i];
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