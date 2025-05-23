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

    ll ans=2;
    while(1){
        set<ll> s;
        for(ll i=0;i<n;i++){
            s.insert(a[i]%ans);
        }

        if(s.size()==2){
            break;
        }
        ans=ans*2;
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