#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll x,y,k;
    cin>>x>>y>>k;

    ll sticks=x;
    ll trades=1;
    ll max_sticks=k+1ll*y*k;
    trades+=(max_sticks-2)/(x-1);
    trades+=k;

    return trades;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}