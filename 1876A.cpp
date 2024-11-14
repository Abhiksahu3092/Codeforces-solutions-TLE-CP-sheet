#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    int n,p;
    cin>>n>>p;
    vector<int> a(n);
    vector<int> b(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    vector<pair<ll,ll>> cost;
    cost.push_back({p,n+1});

    for(int i=0;i<n;i++){
        cost.push_back({b[i],a[i]});
    }

    sort(cost.begin(),cost.end());

    ll ans=p;
    int i=0;
    int total=1;
    while(total<n){
        int left=n-total;
        if(cost[i].second<=left){
            total+=cost[i].second;
            ans+=cost[i].first*1ll*cost[i].second;
        }
        else{
            total=n;
            ans+=cost[i].first*1ll*left;
            break;
        }
        i++;
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