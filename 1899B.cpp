#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<ll> presum;
    presum.push_back(0);
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        presum.push_back(sum);
    }

    ll ans=0;
    for(int i=1;i<=n;i++){
        vector<ll> temp;
        if(n%i==0){
            for(int j=i;j<=n;j+=i){
                ll x=presum[j]-presum[j-i];
                temp.push_back(x);
            }
        }
        if(!temp.empty()){
            sort(temp.begin(),temp.end());
            ans=max(ans,temp[(temp.size())-1]-temp[0]);
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