#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> a(n,vector<int>(m));

    int mini=INT_MAX;
    int sum=0;
    int neg=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            mini=min(abs(a[i][j]),mini);
            sum+=abs(a[i][j]);
            if(a[i][j]<0){
                neg++;
            }
        }
    }

    if(neg%2==0){
        return sum;
    }
    else{
        return sum-2*mini;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}