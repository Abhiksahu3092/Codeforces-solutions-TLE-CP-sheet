#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n,s;
    cin>>n>>s;

    vector<ll> a(n);

    ll maxi=LLONG_MIN;
    ll mini=LLONG_MAX;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        maxi=max(maxi,a[i]);
        mini=min(mini,a[i]);
    }

    if(s>maxi){
        return maxi-mini+s-maxi;
    }

    if(s<mini){
        return mini-s+maxi-mini;
    }

    ll d1=min(abs(maxi-s),abs(mini-s));
    ll d2=max(abs(maxi-s),abs(mini-s));

    return 2*d1+d2;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}