#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool canSplit(const vector<int>& a, int k, int x) {
    int count = 0;
    unordered_set<int> s;
    for (int i = 0; i < a.size(); ++i) {
        s.insert(a[i]);

        // Check if MEX of current segment >= x
        int mex = 0;
        while (s.count(mex)) ++mex;

        if (mex >= x) {
            ++count;
            s.clear(); // Start new subarray
        }
    }
    return count >= k;
}

int maxMinMex(vector<int>& a, int k) {
    int left = 0, right = a.size(), ans = 0;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (canSplit(a, k, mid)) {
            ans = mid;      // try for higher MEX
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int k=2;
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<maxMinMex(a, k) << endl;
    }
}
