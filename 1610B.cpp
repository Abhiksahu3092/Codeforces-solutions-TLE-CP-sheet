#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int i = 0;
    int j = n - 1;
    while (i < j){
        if (a[i] == a[j]){
            i++;
            j--;
        }
        else{
            break;
        }
    }

    if (i >= j){
        return true;
    }

    // Try case-1: remove all a[i]
    bool ok1 = true;
    int l = i + 1, r = j;
    while (l < r){
        if (a[l] == a[i]){
            l++;
        }
        else if (a[r] == a[i]){
            r--;
        }
        else if (a[l] == a[r]){
            l++;
            r--;
        }
        else{
            ok1 = false;
            break;
        }
    }

    // Try case-2: remove all a[j]
    bool ok2 = true;
    l = i, r = j - 1;
    while (l < r){
        if (a[l] == a[j]){
            l++;
        }
        else if (a[r] == a[j]){
            r--;
        }
        else if (a[l] == a[r]){
            l++;
            r--;
        }
        else{
            ok2 = false;
            break;
        }
    }

    return ok1 || ok2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        if (solve())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}