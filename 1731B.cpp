#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n;
    cin>>n;
    
    ll mod= 1e9+7;
    return ((337*n)%mod*(n+1)%mod*(4*n-1)%mod)%mod;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}