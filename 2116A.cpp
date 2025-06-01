#include<bits/stdc++.h>
using namespace std;
#define ll long long

string solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    if(min(a,c)>=min(b,d)){
        return "Gellyfish";
    }

    return "Flower";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}