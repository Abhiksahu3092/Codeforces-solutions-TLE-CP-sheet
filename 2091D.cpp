#include <bits/stdc++.h>
using namespace std;
#define ll long long
// code submitted by abhik

ll solve() {
    ll n, m, k;
    cin >> n >> m >> k;

    if(n*m==k){
        return m;
    }

    ll l=1;
    ll r=m-1;
    while(l<=r){
        ll mid=(l+r)/2;
        if(((m/(mid+1))*mid+ m%(mid+1))*n >= k){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }

    return l;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}
