#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<ll> s(n);
    for(ll i=0;i<n;i++){
        cin>>s[i];
    }

    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        mp[s[i]]++;
    }
    vector<ll>ans(n);

    for(auto it:mp){
        if(it.second==1){
            cout<<-1<<endl;
            return;
        }
    }

    ll index=0;
    ll num=s[0];
    ll i;
    for(i=1;i<n;i++){
        if(s[i]==num){
            ans[i]=i;
        }
        else{
            ans[index]=i;
            index=i;
            num=s[index];
        }
    }

    ans[index]=i;

    for(ll i=0;i<n;i++){
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

