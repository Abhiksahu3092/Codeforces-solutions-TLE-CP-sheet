#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll a, b, c, d, e, f, g, i;
    cin >> a >> b >> c >> d >> e >> f >> g >> i;
    return min(b * c / g, min(d * e, f / i)) / a;
}

int main(){
    cout << solve() << endl;
}