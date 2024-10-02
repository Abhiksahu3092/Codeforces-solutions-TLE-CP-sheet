#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }

    while(b%a!=0){
        int temp=a;
        a=b%a;
        b=temp;
    }

    return a;
}

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ans=INT_MAX;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>=a[i]){
                ans=min(ans,gcd(a[i],a[j]));
            }
            else{
                ans=min(ans,gcd(a[j],a[i]));
            }

            if(ans<=2){
                cout<<"Yes"<<endl;
                return;
            }
        }
    }

    cout<<"No"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}