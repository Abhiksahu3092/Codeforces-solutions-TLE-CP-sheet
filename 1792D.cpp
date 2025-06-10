#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n;
    cin>>n;

    vector<ll> x(n);
    vector<ll> y(n);

    for(ll i=0;i<n;i++){
        cin>>x[i];
    }

    for(ll i=0;i<n;i++){
        cin>>y[i];
    }
    
    vector<ll> net(n,0);
    for(ll i=0;i<n;i++){
        net[i]=y[i]-x[i];
    }

    ll count=0;
    sort(net.begin(),net.end());

    ll l=0;
    ll r=n-1;
    while(l<r){
        if(net[l]+net[r]<0){
            l++;
        }
        else{
            count++;
            l++;
            r--;
        }
    }

    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}