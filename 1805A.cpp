#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        ans=ans^a[i];
    }

    if(n%2!=0){
        return ans;
    }
    
    if(ans==0){
        return 0;
    }

    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}