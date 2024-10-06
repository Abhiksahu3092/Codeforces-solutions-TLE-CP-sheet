#include<bits/stdc++.h>
using namespace std;
#define ll long long

string solve(){
    ll n,k,x;
    cin>>n>>k>>x;

    ll min_sum=k*(k+1)/2;

    ll max_sum=(n-k+1+n)*k/2;

    if(min_sum>x || max_sum<x){
        return "NO";
    }

    return "YES";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}