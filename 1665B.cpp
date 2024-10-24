#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(){
    int n;
    cin>>n;
    vector<ll> a(n);
    map<int,int> freq;
    int temp=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        freq[a[i]]++;
        temp=max(temp,freq[a[i]]);
    }
    unsigned ll temp2=n;
    if(temp==temp2){
        return 0;
    }
    ll ops=0;
    unsigned ll maxi=temp;
    while(maxi!=temp2){
        if(maxi>=temp2/2.0){
            ops+=1+n-maxi;
            maxi=temp2;
        }
        else{
            ops+=1+maxi;
            maxi+=maxi;
        }
    }
    return ops;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}