#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll a,b;
    cin>>a>>b;

    ll ans=1e9;
    for(ll i=0;i<=6;i++){
        ll temp=a;
        if(b+i>=2){
            ll count=i;
            while(temp){
                temp=temp/(b+i);
                count++;
            }
            ans=min(ans,count);
        }
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