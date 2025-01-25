#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool checkprime(ll n) {
    if (n <= 1){
        return false;
    }
    if (n <= 3){
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0){
        return false;
    }
    for (ll i = 5; 1ll*i*i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}


ll solve(){
    ll d;
    cin>>d;

    ll count=0;
    ll num=1+d;
    ll ans=1;

    while(count!=2){
        if(checkprime(num)){
            ans*=num;
            count++;
            num+=d;
        }
        else{
            num++;
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