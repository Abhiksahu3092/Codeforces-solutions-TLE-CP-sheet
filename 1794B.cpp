#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int prev=INT_MAX;

    for(int i=0;i<n;i++){
        if(a[i]==1){
            a[i]++;
        }

        if(a[i]%prev==0){
            a[i]++;
        }
        prev=a[i];
        cout<<a[i]<<" ";
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