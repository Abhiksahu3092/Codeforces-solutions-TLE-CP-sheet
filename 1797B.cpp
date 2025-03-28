#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>> a(n,vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=a[n-i-1][n-j-1]){
                count++;
            }
        }
    }


    count=count/2;
    if(count>k){
        return false;
    }
    else{
        k=k-count;
        if(n%2!=0){
            return true;
        }

        if(k%2==0){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        if(solve()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}