#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,l,r;
    cin>>n>>l>>r;

    ll index=1;
    vector<ll> ans;
    ll temp;
    while(index<=n){
        ll rem=l%index;
        ll q=l/index;
        if(rem){
            temp=index*(q+1);
        }
        else{
            temp=index*q;
        }

        if(temp>r){
            cout<<"NO"<<endl;
            return;
        }
        ans.push_back(temp);
        index++;
    }

    cout<<"YES"<<endl;
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