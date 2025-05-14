#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool bs(int i,int j, vector<ll> &a, int k, int check){
    while(i<=j){
        ll mid=(i+j)/2;
        if((check-a[mid])==k){
            return true;
        }
        else if(check-a[mid]<k){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return false;
}

bool solve(){
    ll n,k;
    cin>>n>>k;

    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());
    for(ll i=n-1;i>=0;i--){
        if(bs(0,i-1,a,k,a[i])){
            return true;
        }
    }

    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        if(solve()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}