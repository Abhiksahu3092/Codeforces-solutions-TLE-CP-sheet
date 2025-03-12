#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    vector<ll> b(n);
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }

    ll i=0;
    ll j=n-1;
    while(i<n && a[i]==b[i]){
        i++;
    }

    while(j>=0 && a[j]==b[j]){
        j--;
    }

    while(i>=1 && b[i-1]<=b[i]){
        i--;
    }

    while(j<n-1 && b[j+1]>=b[j]){
        j++;
    }

    cout<<i+1<<" "<<j+1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}