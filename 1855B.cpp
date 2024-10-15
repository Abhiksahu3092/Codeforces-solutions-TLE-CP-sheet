#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
    ll n;
    cin>>n;

    if(n%2!=0){
        return 1;
    }
    else{
        ll i=1;
        while(n%i==0){
            i++;
        }
        return i-1;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}