#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }

    int ans=0;
    for(int i=0;i<n;i++){
        ans=__gcd(ans,abs(p[i]-(i+1)));
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