#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);
    ll mini=LLONG_MAX;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        mini=min(mini,a[i]);
    }

    ll count=0;
    for(ll i=0;i<n;i++){
        if(a[i]==mini){
            count++;
        }
    }

    if(count>=2){
        return true;
    }

    ll g=0;
    for(ll i=0;i<n;i++){
        if(a[i]!=mini && a[i]%mini==0){
            g=__gcd(g,a[i]);
        }
    }

    if(g==mini){
        return true;
    }

    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        if(solve()){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}