#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll solve(){
    ll n,s;
    cin>>n>>s;

    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    ll l=0;
    ll r=0;
    ll sum=0;
    ll size=0;
    while(l<n && r<n){
        sum+=a[r];
        if(sum>s){
            size=max(size,r-l);
            while(sum>s){
                sum-=a[l];
                l++;
            }
        }
        r++;
    }

    if(sum==s){
        size=max(size,r-l);
    }

    if(size==0){
        return -1;
    }

    return n-size;


}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}