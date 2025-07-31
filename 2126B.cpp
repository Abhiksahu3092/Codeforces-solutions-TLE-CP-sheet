#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n,k;
    cin>>n>>k;

    vector<ll> a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }

    ll zero_count=0;
    ll ans = 0;
    ll i=0;
    while(i<n){
        if(a[i] == 0){
            zero_count++;   
        }
        else{
            zero_count = 0;
        }

        if(zero_count == k){
            ans++;
            zero_count = 0;
            i+=2;
        }
        else{
            i++;
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