#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    vector<vector<int>> indices(k + 1);

    for (int i = 0; i < n; i++) {
        cin >> c[i];
        indices[c[i]].push_back(i + 1);
    }

    int ans = n + 1;
    for (int i = 1; i <= k; i++) {
        indices[i].insert(indices[i].begin(), 0);
        indices[i].push_back(n + 1);

        vector<int> gaps;
        for (int j = 1; j < indices[i].size(); j++) {
            gaps.push_back(indices[i][j] - indices[i][j - 1] - 1);
        }

        sort(gaps.begin(), gaps.end());
        int largest = gaps.back();
        int reduced = largest / 2;
        int secondLargest = gaps.size() >= 2 ? gaps[gaps.size() - 2] : 0;

        ans = min(ans, max(reduced, secondLargest));
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
