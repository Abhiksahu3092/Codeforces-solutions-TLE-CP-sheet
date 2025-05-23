#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n,a,b;
    cin>>n>>a>>b;

    ll gcd=__gcd(a,b);
    ll lcm=(a*b)/gcd;

    ll removed=n/lcm;
    ll n1=(n/a)-removed;
    ll n2=(n/b)-removed;

    ll sum1=n1*(2*n-(n1-1))/2;
    ll sum2=n2*(1+n2)/2;

    return sum1-sum2;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}