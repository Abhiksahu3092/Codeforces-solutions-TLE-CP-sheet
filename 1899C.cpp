#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    ll sum=a[0];
    ll maxi=sum;
    int par=abs(a[0])%2;
    for(int i=1;i<n;i++){
        if(abs(a[i])%2!=par){
            sum+=a[i];
        }
        else{
            sum=a[i];
        }

        if(sum<a[i]){
            sum=a[i];
        }
        par=abs(a[i])%2;
        maxi=max(maxi,sum);
    }

    return maxi;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}