#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    ll max_index=-1;
    ll maxi=LLONG_MIN;
    ll min_index=-1;
    ll mini=LLONG_MAX;
    for(ll i=0;i<n;i++){
        if(a[i]>maxi){
            maxi=a[i];
            max_index=i;
        }
    }
    for(ll i=n-1;i>=0;i--){
        if(a[i]<mini){
            mini=a[i];
            min_index=i;
        }
    }

    if(max_index>min_index){
        return max_index+(n-1-min_index)-1;
    }

    return max_index+(n-1-min_index);
}

int main(){
    cout<<solve()<<endl;;
}