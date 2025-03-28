#include <bits/stdc++.h>
using namespace std;
#define ll long long
// code submitted by abhik

ll solve() {
    ll n, m, k;
    cin >> n >> m >> k;

    if (n >= k) {
        return 1;
    }

    ll rem = k % n;
    ll each = k / n;

    ll max1 = LLONG_MIN;
    ll max2 = LLONG_MIN;

    if (rem != 0) {
        ll each1 = each + rem;
        ll pos = m - each1 + 1;

        if (pos > 0) {
            if (pos >= each1) {
                max1 = 1;
            } else {
                max1 = each1 / pos + (each1 % pos != 0);
            }
        }
    }

    ll pos2 = m - each + 1;

    if (pos2 > 0) {
        if (pos2 >= each) {
            max2 = 1;
        } else {
            max2 = each / pos2 + (each % pos2 != 0);
        }
    }

    return max(max1, max2);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}
