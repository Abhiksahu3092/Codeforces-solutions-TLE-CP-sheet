#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n;
    cin>>n;

    ll mod=1e9+7;

    vector<ll> a(n);
    vector<ll> b(n);

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    for(ll i=0;i<n;i++){
        cin>>b[i];
    }

    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());

    ll i=0;
    ll j=0;
    ll ans=1;
    while(i<n && j<n){
        if(a[i]>b[j]){
            i++;
        }
        else{
            ans=(ans*(i-j)%mod)%mod;
            j++;
        }
    }

    while(j<n){
        ans=(ans*(i-j)%mod)%mod;
        j++;
    }

    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}