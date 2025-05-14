#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll check = a[n - 1];
    ll size = 1;
    ll ops = 0;
    ll i = n - 2;

    while (i >= 0) {
        if (a[i] == check) {
            size++;
            i--;
        } else {
            ops++;
            size *= 2;
            i = n - size - 1;
        }
    }

    return ops;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}
