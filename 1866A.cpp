#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int ops=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        ops=min(ops,abs(a[i]));
    }

    return ops;
}

int main(){
    cout<<solve()<<endl;
}