#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(){
    ll l,r,d,u;
    cin>>l>>r>>d>>u;

    ll x1 = (l + r) * (l + r);  
    ll x2 = (d + u) * (d + u);
    ll x3 = l * l + d * d;
    ll x4 = l * l + u * u;
    ll x5 = r * r + d * d;
    ll x6 = r * r + u * u;

    if(x3>0 && x3==x4 && x4==x5 && x5==x6 && x6==x3 && x1==2*x3 && x2==2*x3){
        return true;
    }

    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        if(solve()){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}