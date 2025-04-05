#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> hash(1001,-1);
    for(int i=0;i<n;i++){
        cin>>a[i];
        hash[a[i]]=i+1;
    }

    int maxi=-1;
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            if(hash[i]!=-1 && hash[j]!=-1 && int(__gcd(i,j))==1){
                maxi=max(maxi,hash[i]+hash[j]);
            }
        }
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