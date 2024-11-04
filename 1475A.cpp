#include<bits/stdc++.h>
using namespace std;
#define ll long long

string solve(){
    ll n;
    cin >> n;
    if ((n & (n - 1)) == 0) {
        return "NO";
    } else {
        return "YES";
    }
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}
