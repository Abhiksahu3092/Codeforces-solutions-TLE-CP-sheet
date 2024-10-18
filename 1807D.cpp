#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n,q;
    cin>>n>>q;
    vector<ll> a(n+1);
    vector<ll> b(n+1);
    b[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=b[i-1]+a[i];

    }
    while(q--){
        int l,r;
        ll k;
        cin>>l>>r>>k;
        ll sum=(l-r+1)*k;
        ll x=sum+b[n]-(b[r]-b[l-1]);
        if(x%2==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}