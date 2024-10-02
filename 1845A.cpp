#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,x;
    cin>>n>>k>>x;
    if(n==1 && x==1){
        cout<<"NO";
        return;
    }

    if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=1;i<=n;i++){
            cout<<1<<" ";
        }
    }
    else{
        if(n%2==0){
            if(2<=k){
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=1;i<=n/2;i++){
                    cout<<2<<" ";
                }
            }
            else{
                cout<<"NO";
            }
        }
        else{
            if(3<=k){
                cout<<"YES"<<endl;
                int temp=(n/2)-1;
                cout<<n/2<<endl;
                for(int i=1;i<=temp;i++){
                    cout<<2<<" ";
                }
                cout<<3<<" ";
            }
            else{
                cout<<"NO";
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}