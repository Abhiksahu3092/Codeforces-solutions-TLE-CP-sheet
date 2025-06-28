#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;

    int ops= 2*n-1;
    cout<<ops<<endl;

    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<i<<" "<<1<<" "<<n<<endl;
        }
        else{
            cout<<i<<" "<<1<<" "<<i-1<<endl;
            cout<<i<<" "<<i<<" "<<n<<endl;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}