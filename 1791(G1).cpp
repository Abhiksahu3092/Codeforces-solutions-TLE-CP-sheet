#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n,c;
    cin>>n>>c;

    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        a[i]=a[i]+i+1;
    }

    sort(a.begin(),a.end());
    ll cost=0;
    ll count=0;
    while(cost+a[count]<=c && count<n){
        cost+=a[count];
        count++;
    }

    return count;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}