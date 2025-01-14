#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,x;
    cin>>n>>x;

    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int minlimit=a[0]-x;
    int maxlimit=a[0]+x;
    int changes=0;
    for(int i=1;i<n;i++){
        int mini=a[i]-x;
        int maxi=a[i]+x;
        if(mini>maxlimit || maxi<minlimit){
            minlimit=mini;
            maxlimit=maxi;
            changes++;
        }
        else{
            minlimit=max(minlimit,mini);
            maxlimit=min(maxlimit,maxi);
        }
    }

    return changes;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}