#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll ns=n*(n-1)/2;
    vector<ll> b(ns);
    map<ll,ll> m;
    set<ll> s;
    for(ll i=0;i<ns;i++){
        cin>>b[i];
        m[b[i]]++;
        s.insert(b[i]);
    }

    vector<ll> x;
    for(auto i:s){
        x.push_back(i);
    }

    sort(x.begin(),x.end());
    vector<ll> a(n);
    ll i=0;
    ll j=0;
    while(i<n && j<x.size()){
        a[i]=x[j];
        m[x[j]]-=(n-(i+1));
        if(m[x[j]]==0){
            j++;
        }
        i++;
    }

    while(i<n){
        a[i]=x[x.size()-1];
        i++;
    }

    for(ll i=0;i<n;i++){
        cout<<a[i]<<" ";
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