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

    ll sum=0;
    for(ll i=0;i<n;i++){
        sum+=a[i];
    }

    return sum-n+1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}