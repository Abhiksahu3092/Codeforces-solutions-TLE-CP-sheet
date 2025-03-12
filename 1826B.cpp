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

    ll x=abs(a[0]-a[n-1]);
    for(ll i=1;i<n/2;i++){
        x=__gcd(abs(a[i]-a[n-i-1]),x);
    }

    return x;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}