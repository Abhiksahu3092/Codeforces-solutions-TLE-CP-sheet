#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n;
    cin>>n;

    string st;
    cin>>st;
    ll cost=0;
    vector<bool> removed(n+1,false);
    for(ll i=1;i<=n;i++){
        for(ll j=i;j<=n;j+=i){
            if(!removed[j]){
                if(st[j-1]=='1'){
                    break;
                }
                else{
                    cost+=i;
                    removed[j]=true;
                }
            }
        }
    }

    return cost;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}