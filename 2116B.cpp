#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll mod=998244353;
vector<ll> dp(100001,0);

void solve(){
    ll n;
    cin>>n;
    vector<ll> p(n);
    vector<ll> q(n);

    ll mod=998244353;
    map<ll,ll> mpa;
    for(ll i=0;i<n;i++){
        cin>>p[i];
        mpa[p[i]]=i;
    }

    map<ll,ll> mpb;
    for(ll i=0;i<n;i++){
        cin>>q[i];
        mpb[q[i]]=i;
    }

    ll maxa=p[0];
    ll maxb=q[0];

    vector<ll> ans(n,0);
    for(ll i=0;i<n;i++){
        maxa=max(maxa,p[i]);
        maxb=max(maxb,q[i]);

        pair<ll,ll> pa={maxa,q[i-mpa[maxa]]};
        pair<ll,ll> pb={maxb,p[i-mpb[maxb]]};

        auto it=max(pa,pb);
        ans[i]=(dp[it.first]%mod + dp[it.second]%mod)%mod;
        cout<<ans[i]<<" ";
    }

    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    dp[0]=1;
    for(ll i=1;i<100001;i++){
        dp[i]=(dp[i-1]%mod * 2%mod)%mod;
    }
    while(t--){
        solve();
    }
}