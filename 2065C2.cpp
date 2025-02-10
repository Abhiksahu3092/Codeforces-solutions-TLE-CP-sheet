#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll bs(ll l, ll r, vector<ll>&a,vector<ll>&b,ll i){
    ll x=a[i];
    ll y=a[i+1];
    ll ans=LLONG_MIN;

    while(l<=r){
        ll m=(l+r)/2;
        if(b[m]-x<=y){
            ans=max(b[m]-x,ans);
            l=m+1;
        }
        else{
            r=m-1;
        }
    }

    return ans;
}

string solve(){
    ll n,m;
    cin>>n>>m;

    vector<ll> a(n);
    vector<ll> b(m);

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    for(ll j=0;j<m;j++){
        cin>>b[j];
    }

    sort(b.begin(),b.end());
    a[n-1]=max(a[n-1],b[m-1]-a[n-1]);

    for(ll i=n-2;i>=0;i--){
        ll x=bs(0,m-1,a,b,i);
        if(a[i]>a[i+1] && x==LLONG_MIN){
            return "NO";
        }
        else{
            if(a[i]<=a[i+1]){
                a[i]=max(a[i],x);
            }
            else{
                a[i]=x;
            }
        }
    }
    return "YES";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}