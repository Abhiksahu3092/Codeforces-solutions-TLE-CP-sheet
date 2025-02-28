#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,q;
    cin>>n>>q;

    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    vector<ll> x(q);
    set<ll> st;
    for(int j=0;j<q;j++){
        cin>>x[j];
    }

    for(ll i=0;i<q;i++){
        if(st.count(x[i])){
            continue;
        }
        st.insert(x[i]);
        for(ll j=0;j<n;j++){
            if((a[j]%(1<<x[i]))==0){
                a[j]=a[j]+(1<<(x[i]-1));
            }
        }
    }

    for(ll i=0;i<n;i++){
        cout<<a[i]<<" ";
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