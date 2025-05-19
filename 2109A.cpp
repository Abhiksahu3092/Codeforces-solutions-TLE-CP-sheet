#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    bool start = true;
    bool end = true;
    bool found = false;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            if(i>=1 && a[i-1]!=1){
                start=false;
                break;
            }

            if(i<n-1 && a[i+1]!=1){
                end=false;
                break;
            }

            found=true;
        }
    }

    if(!found){
        return false;
    }

    return start && end;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        if(!solve()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}