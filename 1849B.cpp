#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> health(n);
    priority_queue<pair<int,int>> pq;
    for(int i=0;i<n;i++){
        cin>>health[i];
    }

    for(int i=0;i<n;i++){
        if(health[i]%k==0){
            pq.push({k,-i});
        }
        else{
            pq.push({health[i]%k,-i});
        }
    }

    while(!pq.empty()){
        cout<<-1*pq.top().second+1<<" ";
        pq.pop();
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