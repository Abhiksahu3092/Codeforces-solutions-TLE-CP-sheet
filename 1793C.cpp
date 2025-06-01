#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    vector<ll> b=a;

    sort(b.begin(), b.end());
    ll mini=0;
    ll maxi=n-1;
    ll l=0;
    ll r=n-1;
    while(l<r){
        if(a[l]==b[maxi]){
            l++;
            maxi--;
        }
        else if(a[r]==b[maxi]){
            r--;
            maxi--;
        }
        else if(a[l]==b[mini]){
            l++;
            mini++;
        }
        else if(a[r]==b[mini]){
            r--;
            mini++;
        }
        else{
            cout<<l+1<<" "<<r+1<<endl;
            return;
        }
    }

    cout<<-1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}