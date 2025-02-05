#include <bits/stdc++.h>
using namespace std;
#define ll long long

int countOperations(ll ratio) {
    int count = 0;
    while (ratio % 8 == 0) ratio /= 8, count++;
    while (ratio % 4 == 0) ratio /= 4, count++;
    while (ratio % 2 == 0) ratio /= 2, count++;
    return (ratio == 1) ? count : -1;
}

int solve() {
    ll a, b;
    cin >> a >> b;

    if (a == b) return 0;
    if (a % b == 0) return countOperations(a / b);
    if (b % a == 0) return countOperations(b / a);

    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}
