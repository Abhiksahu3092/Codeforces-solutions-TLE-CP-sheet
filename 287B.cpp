#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll sum(ll n){
    return n*(n+1)/2;
}

ll solve(){
    ll n,k;
    cin>>n>>k;

    ll s=sum(k-1);
    n-=1;
    if(s<n){
        return -1;
    }
    else{
        ll l=0;
        ll r=k-1;
        while(l<=r){
            ll mid=(l+r)/2;
            ll s1=sum(mid);
            if(s-s1>=n){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return k-1-r;
    }
}

int main(){
    int t;
    t=1;
    while(t--){
        cout<<solve()<<endl;
    }
}