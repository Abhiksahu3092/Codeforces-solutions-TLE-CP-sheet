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

    set<ll> prev,curr;
    prev.insert(a[0]);
    ll count=1;
    for(ll i=1;i<n;i++){
        curr.insert(a[i]);
        if(prev.count(a[i])){
            prev.erase(a[i]);
        }

        if(prev.size()==0){
            count++;
            prev=curr;
            curr.clear();
        }
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