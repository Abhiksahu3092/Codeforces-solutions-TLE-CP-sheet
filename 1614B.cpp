#include<bits/stdc++.h>
using namespace std;
#define ll long long
// test

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> sorted_a = a;
        sort(sorted_a.rbegin(), sorted_a.rend());

        map<int, vector<int>> mp;
        int pos = 1, neg = -1;
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                mp[sorted_a[i]].push_back(pos++);
            } else {
                mp[sorted_a[i]].push_back(neg--);
            }
        }

        vector<int> positions(n + 1);
        ll total_time = 0;
        for (int i = 0; i < n; ++i) {
            positions[i + 1] = mp[a[i]].back();
            mp[a[i]].pop_back();
            total_time += 2LL * abs(positions[i + 1]) * a[i];
        }

        cout << total_time << "\n0 ";
        for (int i = 1; i <= n; ++i) {
            cout << positions[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
