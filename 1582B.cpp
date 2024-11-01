#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    ll ones=0;
    ll zeroes=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            ones++;
        }
        if(a[i]==0){
            zeroes++;
        }
    }

    //NOTE: nco+nc1+nc2+........ncn=2^n

    ll ans=ones;
    for(int i=0;i<zeroes;i++){
        ans=ans*2;
    }
    return ans;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}