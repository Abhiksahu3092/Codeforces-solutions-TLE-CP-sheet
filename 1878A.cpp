#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            found=true;
        }
    }

    if(found){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}