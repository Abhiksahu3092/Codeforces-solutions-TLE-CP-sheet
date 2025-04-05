#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll total_sum=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        total_sum+=a[i];
    }

    ll ans=1;
    ll presum=0;
    for(ll i=0;i<n-1;i++){
        presum+=a[i];
        ans=max(ans,__gcd(presum,total_sum-presum));
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