#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    
    ll uni_x=-1;
    ll uni_y=-1;
    if((2*a[0]-a[1])>=0 && (2*a[0]-a[1])%(n+1)==0){
        ll y=(2*a[0]-a[1])/(n+1);
        ll x=a[0]-n*y;
        if(x>=0 && y>=0){
            uni_x=x;
            uni_y=y;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }

    for(ll i=0;i<n;i++){
        if(a[i]!=((i+1)*uni_x + (n-i)*uni_y)){
            return false;
        }
    }

    return true;

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