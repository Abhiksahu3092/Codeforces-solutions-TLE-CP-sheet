#include <bits/stdc++.h>
using namespace std;

string solve() {
    int n, r, b;
    cin >> n >> r >> b;

    string ans = "";
    string str = "";
    int count = ceil((double)r / (b + 1));
    int i = 0;

    while (b > 0) {
        if (i == count) {
            ans += str + "B";
            b--;
            str = "";
            i = 0;
            if (r > 0) {
                count = ceil((double)r / (b + 1));
            }
            continue;
        }
        if (r > 0) {
            str += "R";
            i++;
            r--;
        }
    }

    ans += str;
    while (r > 0) {
        ans += "R";
        r--;
    }

    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}
