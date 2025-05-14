#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
    int n;
    cin>>n;
    vector<int> p(n);
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>p[i];
        if(p[i]!=i){
            ans=max(ans,p[i]);
        }
    }

    for(int i=0;i<n;i++){
        if(p[i]==i){
            continue;
        }
        else{
            ans=ans&p[i];
        }
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