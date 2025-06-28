#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int orig_ones = count(s.begin(), s.end(), '1');
    long long total = 0;
    for (char c : s) {
        if (c == '1') {
            total += (orig_ones - 1);
        } else {
            total += (orig_ones + 1);
        }
    }

    return total;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}