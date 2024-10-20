#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    if(n<4 || n%2!=0){
        cout<<-1<<endl;
    }
    else{
        ll maxi;
        maxi=n/4;

        ll mini;
        if(n%6==0){
            mini=n/6;
        }
        else{
            mini=(n/6)+1;
        }

        cout<<mini<<" "<<maxi<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}