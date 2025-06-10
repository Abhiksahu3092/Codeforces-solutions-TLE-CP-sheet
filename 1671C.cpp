#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n,x;
    cin>>n>>x;

    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());
    vector<ll> prefix(n,0);
    prefix[0]=a[0];
    for(ll i=1;i<n;i++){
        prefix[i]=a[i]+prefix[i-1];
    }

    ll ans=0;
    for(ll i=n-1;i>=0;i--){
        ll diff=x-prefix[i];
        if(diff>=0 && diff/(i+1)>=0){
            ans+=(diff/(i+1))+1;
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