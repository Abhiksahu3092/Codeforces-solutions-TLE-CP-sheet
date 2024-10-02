#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    int n;
    int x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=INT_MIN;
    int start=0;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]-start);
        start=arr[i];
    }
    
    maxi=max(maxi,2*(x-start));
    cout<<maxi<<endl;
    
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}