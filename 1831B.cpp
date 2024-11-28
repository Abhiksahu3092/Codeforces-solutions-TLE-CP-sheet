#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    map<int,int> mp1,mp2;
    int count=1;
    mp1[a[0]]=1;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            count++;
        }
        else{
            count=1;
        }

        mp1[a[i]]=max(mp1[a[i]],count);
    }

    count=1;
    mp2[b[0]]=1;
    for(int i=1;i<n;i++){
        if(b[i]==b[i-1]){
            count++;
        }
        else{
            count=1;
        }

        mp2[b[i]]=max(mp2[b[i]],count);
    }
    int ans=1;
    for(auto x:mp1){
        ans=max(ans,mp1[x.first]+mp2[x.first]);
    }

    for(auto x:mp2){
        ans=max(ans,mp1[x.first]+mp2[x.first]);
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