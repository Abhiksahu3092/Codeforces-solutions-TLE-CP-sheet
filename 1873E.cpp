#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n,x;
    cin>>n>>x;

    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    ll l=1;
    ll r=INT_MAX;
    ll ans=0;

    while(l<=r){
        ll mid=(l+r)/2;
        ll water=0;
        for(int i=0;i<n;i++){
            if(mid>a[i]){
                water+=(mid-a[i]);
            }
        }

        if(water<=x){
            ans=max(ans,mid);
            l=mid+1;
        }
        else{
            r=mid-1;
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