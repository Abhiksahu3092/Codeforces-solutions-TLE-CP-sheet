#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n,x;
    cin>>n>>x;

    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    ll count=0;
    ll i=n-1;
    while(i>=0 && a[i]>=x){
        count++;
        i--;
    }

    ll size=1;
    while(i>=0){
        if(size*a[i]>=x){
            count++;
            size=1;
        }
        else{
            size++;
        }
        i--;
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