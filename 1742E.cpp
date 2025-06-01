#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,q;
    cin>>n>>q;

    vector<ll> a(n);
    vector<ll> k(q);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    for(ll i=0;i<q;i++){
        cin>>k[i];
    }

    map<ll,ll> mp;
    vector<ll> dp(n);
    dp[0]=a[0];
    ll maxi=a[0];
    mp[0]=maxi;
    for(ll i=1;i<n;i++){
        dp[i]=dp[i-1] + a[i];
        maxi=max(maxi,a[i]);
        mp[i]=maxi;
    }

    vector<ll> ans(q,0);
    for(ll i=0;i<q;i++){
        ll l=0;
        ll r=n-1;
        ll res = -1;

        while(l <= r){
            ll mid=(l+r)/2;
            if(mp[mid] <= k[i]){
                res = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }

        if(res == -1){
            ans[i] = 0;
        }
        else{
            ans[i] = dp[res];
        }
        cout<<ans[i]<<" ";
    }

    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
