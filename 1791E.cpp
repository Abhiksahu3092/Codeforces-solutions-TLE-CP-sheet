#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    ll neg=0;
    for(ll i=0;i<n;i++){
        if(a[i]<0){
            neg++;
        }
        a[i]=abs(a[i]);
    }
    
    sort(a.begin(),a.end());
    ll sum=0;
    neg=neg%2;
    for(ll i=1;i<n;i++){
        sum+=a[i];
    }

    if(neg){
        sum-=a[0];
    }
    else{
        sum+=a[0];
    }

    return sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}