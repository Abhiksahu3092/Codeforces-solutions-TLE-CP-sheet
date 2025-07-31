#include<bits/stdc++.h>
using namespace std;
#define ll long long

string solve(){
    int n,k;
    cin>>n>>k;

    vector<int> a(n);
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxi=max(maxi,a[i]);
        mini=min(mini,a[i]);
    }
    
    int count=0;
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]==maxi){
            count++;
        }
        sum+=a[i];
    }

    int diff=maxi-mini;
    if(diff>k+1){
        return "Jerry";
    }
    else if(diff==k+1 && count>1){
        return "Jerry";
    }
    else{
        if(sum%2==0){
            return "Jerry";
        }
        else{
            return "Tom";
        }
    }
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}