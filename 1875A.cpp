#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll a,b,n;
    cin>>a>>b>>n;

    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }

    ll count=0;

    for(ll i=0;i<n;i++){
        count+=b-1;
        b=min(arr[i],a-1);
        count++;
    }
    count+=b;
    return count;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}