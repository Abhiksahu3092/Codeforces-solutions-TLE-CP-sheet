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

    int slope =0;
    int ans=1;
    for(ll i=1;i<n;i++){
        if(a[i]>a[i-1] && slope!=1){
            slope=1;
            ans++;
        }
        else if(a[i]<a[i-1] && slope!=-1){
            slope=-1;
            ans++;
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