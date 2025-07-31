#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(){
    ll n,j,k;
    cin>>n>>j>>k;

    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    ll check=a[j-1];
    ll l=0;
    ll g=0;
    ll e=0;
    ll ans=0;
    for(ll i=0;i<n;i++){
        if(i!=j-1){
            if(a[i]<check){
                l++;
            }
            else if(a[i]>check){
                g++;
            }
            else{
                e++;
            }
        }
    }

    if(g>0){
        ans+=(g-1);
    }

    ans+=(l+e);
    if((n-ans)<=k){
        return true;
    }
    return false;


}

int main(){
    int t;
    cin>>t;
    while(t--){
        if(solve()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}