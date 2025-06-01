#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve() {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            int a;
            cin >> a;
            if (a == 1) {
                return abs(2 - i) + abs(2 - j);
            }
        }
    }
    return -1;
}

int main(){
    int t;
    t=1;
    while(t--){
        cout<<solve()<<endl;
    }
}