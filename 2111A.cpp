#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll x;
    cin>>x;

    ll count=1;
    ll ans=3;
    while(count<x){
        count=count*2+1;
        ans+=2;
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