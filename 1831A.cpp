#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int temp=n+1;
    vector<int> b(n);
    for(int i=0;i<n;i++){
        b[i]=temp-a[i];
        cout<<b[i]<<" ";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}