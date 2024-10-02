#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,m;
    cin>>n>>m;
    string x;
    cin>>x;
    string s;
    cin>>s;
    for(int i=0;i<=5;i++){
        if(x.find(s)!=-1){
            return i;
        }
        x.append(x);
    }

    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int ans=solve();
        cout<<ans<<endl;
    }
}