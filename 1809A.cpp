#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==2){
        cout<<"YES"<<endl;
    }
    else{
        sort(arr.begin(),arr.end());
        int count=1;
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[i-1]){
                count++;
            }
        }

        if(count>2){
            cout<<"NO"<<endl;
        }
        else if(count==1){
            cout<<"YES"<<endl;
        }
        else{
            int temp=arr[0];
            int freq=0;
            for(int i=0;i<n;i++){
                if(arr[i]==temp){
                    freq++;
                }
            }

            if(n%2==0){
                if(freq==n/2){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                if(freq==n/2 || freq==n/2 +1){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}