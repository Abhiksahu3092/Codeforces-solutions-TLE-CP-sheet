#include<bits/stdc++.h>
using namespace std;
#define ll long long
// define 
void solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    vector<ll> b=a;
    sort(b.begin(),b.end());
    if(b==a){
        cout<<0<<endl;
        return ;
    }

    if(a[n-2]>a[n-1]){
        cout<<-1<<endl;
        return;
    }

    a[n-3]=a[n-2]-a[n-1];
    if(a[n-3]<=a[n-2] && a[n-3]<=a[n-1] && a[n-2]<=a[n-1]){
        cout<<n-2<<endl;
        for(ll i=0;i<n-2;i++){
            cout<<(i+1)<<" "<<n-1<<" "<<n<<endl;
        }
    }
    else{
        cout<<-1<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}