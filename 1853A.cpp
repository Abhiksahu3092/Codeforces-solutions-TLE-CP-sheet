#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min_diff=INT_MAX;

    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            return 0;
        }
        else{
            min_diff=min(min_diff,a[i]-a[i-1]);
        }
    }

    return (min_diff/2)+1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}