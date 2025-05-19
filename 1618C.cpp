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

    ll gcd1=a[0];
    for(ll i=0;i<n;i+=2){
        gcd1=__gcd(gcd1,a[i]);
    }
    ll gcd2=a[1];
    for(ll i=1;i<n;i+=2){
        gcd2=__gcd(gcd2,a[i]);
    }

    bool check1=false;
    bool check2=false;
    for(ll i=0;i<n;i++){
        if(!check1 && i%2==0 && a[i]%gcd2==0){
            check1=true;
        }

        if(!check2 && i%2==1 && a[i]%gcd1==0){
            check2=true;
        }          
    }

    if(check1 && check2){
        return 0;
    }
    else{
        if(!check1){
            return gcd2;
        }
        else{
            return gcd1;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}