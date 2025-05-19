#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll ans(ll n){
    ll count=0;
    while(n>1){
        n=(n+1)/2;
        count++;
    }
    return count;
}

ll solve(){
    ll n,m,a,b;
    cin>>n>>m>>a>>b;

    if((n+1-a)<a){
        a=n+1-a;
    }

    if((m+1-b)<b){
        b=m+1-b;
    }

    return min(1+ans(n)+ans(b),1+ans(a)+ans(m));
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}