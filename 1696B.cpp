#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    vector<int> a(n+1,0);
    int ans=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i-1]==0 && a[i]!=0){
            ans++;
        }
    }
    return min(ans,2);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}