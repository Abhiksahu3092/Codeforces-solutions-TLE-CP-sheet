#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    int k=0;
    while(1<<(k+1)<=n-1){
        k++;
    }

    vector<int> ans;
    for(int i=(1<<k)-1;i>=0;i--){
        ans.push_back(i);
    }

    for(int i=(1<<k);i<=n-1;i++){
        ans.push_back(i);
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}