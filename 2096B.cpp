#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n,k;
    cin>>n>>k;

    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll> b(n);
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }

    ll ans=0;
    vector<ll> c(n);
    for(ll i=0;i<n;i++){
        c[i]=min(a[i],b[i]);
        ans+=max(a[i],b[i]);
    }

    sort(c.rbegin(),c.rend());
    for(ll i=0;i<k-1;i++){
        ans+=c[i];
    }

    return ans+1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}