#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n;
    cin>>n;

    vector<string> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    ll ans=0;
    for(ll i=0;i<n/2;i++){
        for(ll j=0;j<n/2;j++){
            ll temp=(a[i][j]-'0') + (a[j][n-1-i]-'0') + (a[n-1-i][n-1-j]-'0') + (a[n-1-j][i]-'0');
            ans+=min(temp,4-temp);
        }
    }

    if(n%2==1){
        for(ll i=0;i<n/2;i++){
            ll temp=(a[i][n/2]-'0') + (a[n/2][n-1-i]-'0') + (a[n-1-i][n-1-n/2]-'0') + (a[n-1-n/2][i]-'0');
            ans+=min(temp,4-temp);
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