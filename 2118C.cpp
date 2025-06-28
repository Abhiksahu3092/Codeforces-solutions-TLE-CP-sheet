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

    set<pair<ll,ll>> s;
    for(ll i=0;i<n;i++){
        ll j=0;
        while((1ll<<j) & a[i]){
            j++;
        }
        s.insert({1ll<<j,i});
    }

    ll ans=0;
    for(ll i=0;i<n;i++){
        ll temp=a[i];
        while(temp){
            if(temp&1ll){
                ans++;
            }
            temp=temp>>1;
        }
    }

    while(k>0 && !s.empty()){
        if(s.begin()->first<=k){
            k-=s.begin()->first;
            ans++;
            a[s.begin()->second]|=s.begin()->first;
            ll idx=s.begin()->second;
            s.erase(s.begin());
            ll j=0;
            while((1ll<<j) & a[idx]){
                j++;
            }

            s.insert({1ll<<j,idx});
        }
        else{
            break;
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