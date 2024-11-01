#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a,b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<" "<<0<<endl;
    }
    else if(abs(a-b)==1){
        cout<<1<<" "<<0<<endl;
    }
    else{
        ll exci=abs(a-b);
        ll q=a/exci;
        q++;
        ll temp1=a%exci;
        ll temp2=exci*q-a;
        ll ans;
        if(temp1<=temp2){
            ans=temp1;
        }
        else{
            ans=temp2;
        }

        cout<<exci<<" "<<ans<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}