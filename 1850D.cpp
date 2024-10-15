#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    int count=1;
    int end=1;
    int size=1;
    while(end<n){
        if(a[end]-a[end-1]<=k){
            count++;
        }
        else{
            size=max(count,size);
            count=1;
        }
        end++;
    }
    size=max(count,size);
    return n-size;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}