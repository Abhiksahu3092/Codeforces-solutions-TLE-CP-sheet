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

    map<ll,ll> long_subarr;
    ll max_length=1;
    ll prev=a[0];
    for(ll i=1;i<n;i++){
        if(a[i]==prev){
            max_length++;
        }
        else{
            long_subarr[prev]=max(long_subarr[prev], max_length);
            max_length=1;
        }
        prev=a[i];
    }
    long_subarr[prev]=max(long_subarr[prev], max_length);

    ll ans=LLONG_MAX;
    for(auto it: long_subarr){
        ans=min(ans, it.first*(n-it.second));
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