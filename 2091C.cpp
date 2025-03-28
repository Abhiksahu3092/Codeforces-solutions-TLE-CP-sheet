#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    if(n%2==0){
        cout<<-1<<endl;
        return;
    }

    for(ll i=n;i>=1;i--){
        cout<<i<<" ";
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