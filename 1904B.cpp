#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> b = a;
    sort(b.begin(), b.end());

    ll i=0;
    ll j=1;
    ll sum=b[0];
    map<ll,ll> mp;
    while(j<n){
        if(sum<b[j]){
            while(i<j){
                mp[b[i]]=j-1;
                i++;
            }
        }
        sum+=b[j];
        j++;
    }

    while(i<n){
        mp[b[i]]=n-1;
        i++;
    }

    for(ll i=0;i<n;i++){
        cout<<mp[a[i]]<<" ";
    }
    cout<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
