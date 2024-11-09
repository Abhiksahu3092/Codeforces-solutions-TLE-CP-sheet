#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n*k);
    for(int i=0;i<n*k;i++){
        cin>>a[i];
    }
    int left=k;
    int shift=n/2+1;
    int i=n*k;
    ll sum=0;
    while(left>0){
        i-=shift;
        sum+=a[i];
        left--;
    }

    return sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}