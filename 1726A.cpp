#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int maxi1=a[n-1]-a[0];
    int maxi2=maxi1;
    int maxi3=maxi1;
    for(int i=0;i<n-1;i++){
        maxi1=max((a[i]-a[i+1]),maxi1);
        maxi2=max((a[n-1]-a[i]),maxi2);
    }

    for(int i=1;i<n;i++){
        maxi3=max((a[i]-a[0]),maxi3);
    }

    return max(maxi1,max(maxi2,maxi3));
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}