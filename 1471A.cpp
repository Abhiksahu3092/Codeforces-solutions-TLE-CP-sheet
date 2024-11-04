#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);

    ll mini=0;
    ll maxi=0;
    //ceil[a/x]+ceil[b/x]+ceil[c/x]+.......>= ceil[(a+b+c.....)/x]
    for(int i=0;i<n;i++){
        cin>>a[i];
        mini+=a[i];
        maxi+=ceil(double(a[i])/x);
    }

    mini=ceil(double(mini)/x);
    cout<<mini<<" "<<maxi<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}