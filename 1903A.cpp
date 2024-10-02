#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        if(k<=1){
            bool issorted=true;
            for(int i=1;i<n;i++){
                if(arr[i]<arr[i-1]){
                    issorted=false;
                    break;
                }
            }
            if(issorted){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}