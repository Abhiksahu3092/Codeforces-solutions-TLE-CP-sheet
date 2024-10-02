#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    vector<int> a(n-1);
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=a[i];
    }
    sum=(-1)*sum;
    return sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}