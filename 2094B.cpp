#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,m,l,r;
    cin>>n>>m>>l>>r;

    ll x=0;
    ll y=0;
    while(y<r && m){
        y++;
        m--;
    }

    while(x>l && m){
        x--;
        m--;
    }

    cout<<x<<" "<<y<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}