#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n,c;
    cin>>n>>c;

    vector<ll> s(n);
    for(ll i=0;i<n;i++){
        cin>>s[i];
    }

    ll square_sum=0;
    ll sum=0;
    for(ll i=0;i<n;i++){
        square_sum+=(s[i]*s[i]);
        sum+=s[i];
    }

    return (sqrt(((sum/n)*(sum/n))-((square_sum-c)/n))-(sum/n))/2;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}