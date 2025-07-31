#include<bits/stdc++.h>
using namespace std;
#define ll long long

string solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    string ans="";
    vector<ll> prefix(n,0);
    prefix[0]=a[0];
    for(ll i=1;i<n;i++){
        prefix[i]=min(a[i],prefix[i-1]);
    }

    vector<ll> suffix(n,0);
    suffix[n-1]=a[n-1];
    for(ll i=n-2;i>=0;i--){
        suffix[i]=max(a[i],suffix[i+1]);
    }


    for(ll i=0;i<n;i++){
        if(prefix[i]==a[i] || suffix[i]==a[i]){
            ans+='1';
        }
        else{
            ans+='0';
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