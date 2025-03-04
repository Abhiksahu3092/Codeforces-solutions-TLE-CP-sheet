#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n,k,a,b;
    cin>>n>>k>>a>>b;

    vector<ll> x(n);
    vector<ll> y(n);
    for(ll i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }


    ll price=abs(x[a-1]-x[b-1])+abs(y[a-1]-y[b-1]);
    ll pricea=LLONG_MAX/2;
    ll priceb=LLONG_MAX/2;
    for(ll i=0;i<k;i++){
        pricea=min(pricea,abs(x[i]-x[a-1])+abs(y[i]-y[a-1]));
        priceb=min(priceb,abs(x[i]-x[b-1])+abs(y[i]-y[b-1]));
    }

    return min(price,pricea+priceb);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}