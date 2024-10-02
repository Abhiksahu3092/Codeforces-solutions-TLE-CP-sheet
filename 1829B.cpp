#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int size=0;
    int count=0;

    for(int i=0;i<n;i++){
        if(a[i]==0){
            count++;
        }
        else{
            size=max(size,count);
            count=0;
        }
    }

    size=max(size,count);
    return size;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}