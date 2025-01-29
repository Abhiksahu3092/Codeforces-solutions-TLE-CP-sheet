#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool checkfair(ll n){
    ll temp=n;
    while(temp){
        ll digit=temp%10;
        if(digit!=0 && n%digit!=0){
            return false;
        }
        temp/=10;
    }

    return true;
}

ll solve(){
    ll n;
    cin>>n;

    while(!checkfair(n)){
        n++;
    }

    return n;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}