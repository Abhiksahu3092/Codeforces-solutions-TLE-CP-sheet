#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(){
    int n,x;
    cin>>n>>x;

    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int first=-1;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            first=i;
            break;
        }
    }

    int last=-1;
    for(int j=n-1;j>=0;j--){
        if(a[j]==1){
            last=j;
            break;
        }
    }

    if(first==-1 || last==-1){
        return true;
    }

    if(abs(last-first+1)<=x){
        return true;
    }

    return false;
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