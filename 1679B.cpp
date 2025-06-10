#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, q;
    cin >> n >> q;

    ll sum = 0;
    vector<ll> a(n);
    vector<ll> onechange(n, 0);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    ll all_change = -1;
    ll last_val = -1;

    for(ll i = 0; i < q; i++){
        int t;
        cin >> t;
        if(t == 1){
            ll index, val;
            cin >> index >> val;
            index--;
            if(onechange[index] > all_change){
                sum += (val - a[index]);
            }
            else{
                sum += (val - last_val);
            }
            onechange[index] = i;
            a[index] = val;
        }
        else{
            cin >> last_val;
            all_change = i;
            sum = n * last_val;
        }
        cout << sum << endl;
    }
}

int main(){
    int t = 1;
    while(t--){
        solve();
    }
}
