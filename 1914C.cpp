#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    int n,k;
    cin>>n>>k;

    vector<int> a(n);
    vector<int> b(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    int maxi=0;
    ll exp=0;
    ll sum=0;
    for(int i=0;i<min(n,k);i++){
        sum+=a[i];
        maxi=max(b[i],maxi);

        exp=max(exp,sum+1ll*(k-i-1)*maxi);
    }
    return exp;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}