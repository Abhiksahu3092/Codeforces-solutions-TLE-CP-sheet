#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    string s;
    cin>>s;

    int n=stoi(s);
    for(int i=0;i*i<=n;i++){
        if(i*i==n){
            cout<<0<<" "<<i<<endl;
            return;
        }
    }

    cout<<-1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}