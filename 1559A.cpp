#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ans=a[0];
    //a1&a2&a3&....&an<=minimum(a1,a2,a3,....,an)
    for(int i=1;i<n;i++){
        ans=ans&a[i];
    }

    return ans;
        
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}