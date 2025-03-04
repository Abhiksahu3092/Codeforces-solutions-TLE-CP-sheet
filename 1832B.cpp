#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n,k;
    cin>>n>>k;

    vector<ll> a(n);
    ll total=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        total+=a[i];
    }

    sort(a.begin(),a.end());

    vector<ll> max_sum;
    max_sum.push_back(0);
    ll sum=0;
    for(ll i=n-1;i>=(n-k);i--){
        sum+=a[i];
        max_sum.push_back(sum);
    }

    sum=0;
    vector<ll> min_sum;
    min_sum.push_back(0);
    for(ll i=1;i<2*k;i=i+2){
        sum+=(a[i]+a[i-1]);
        min_sum.push_back(sum);
    }

    ll ans=INT_MIN;
    ll i=min_sum.size()-1;
    ll j=0;

    while(k>=0){
        ans=max(ans,total-min_sum[i]-max_sum[j]);
        i--;
        j++;
        k--;
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