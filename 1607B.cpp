#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(){
    ll x,n;
    cin>>x>>n;
    if((n/10)%2!=0){
        if(x%2==0){
            x++;
        }
        else{
            x--;
        }
    }

    ll count=(n/10)*10+1;
    ll sign=1;
    if(x%2==0){
        sign=-1;
    }
    else{
        sign=1;
    }

    ll temp=1;
    for(ll i=count;i<=n;i++){
        if(temp==2){
            temp=1;
            sign*=-1;
            x+=sign*i;
        }
        else{
            x+=sign*i;
            temp++;
        }
    }

    return x;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}