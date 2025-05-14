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

    ll sum=0;
    ll rem=0;
    ll ans=0;
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        sum+=a[i];
        rem=total_sum-sum;
        mp[sum]=i+1;
        if(mp[rem]!=0){
            ans=max(ans,n-i-1+mp[rem]);
        }
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