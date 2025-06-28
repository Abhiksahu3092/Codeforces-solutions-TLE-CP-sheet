#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
    int n;
    cin>>n;

    vector<int> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=1;i<n;i++){
        if(abs(a[i]-a[i-1])<=1){
            return 0;
        }
    }

    for(int i=2;i<n;i++){
        if((a[i]>a[i-1] && a[i-1]<a[i-2]) || (a[i]<a[i-1] && a[i-1]>a[i-2])){
            return 1;
        }
    }

    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}