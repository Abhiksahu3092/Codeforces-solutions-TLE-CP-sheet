#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin >> n;

    ll sum = n * (n + 1) / 2;
    ll x = sqrt(sum);
    if (x * x == sum) {
        cout << -1 << endl;
        return;
    }

    vector<ll> ans(n+1);
    for(ll i=1;i<=n;i++){
        ans[i]=i;
    }

    ll temp_sum=0;
    for(ll i=1;i<=n;i++){
        temp_sum += ans[i];
        ll q =sqrt(temp_sum);
        if(q*q == temp_sum){
            swap(ans[i],ans[i+1]);
            temp_sum +=ans[i];
            temp_sum -= ans[i+1];
        }
        cout<< ans[i]<<" ";
    }

    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
