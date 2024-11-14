#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(k==2 || k==3 || k==5){
        int ops=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]%k==0){
                return 0;
            }
            ops=min(ops,k-a[i]%k);
        }
        return ops;
    }
    else{
        int ops1=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]%k==0){
                return 0;
            }
            ops1=min(ops1,k-a[i]%k);
        }

        int evens=0;
        int ops2;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                evens++;
            }

            if(evens>=2){
                ops2=0;
                break;
            }
        }

        if(evens==1){
            ops2=1;
        }

        if(evens==0){
            ops2=2;
        }

        return min(ops1,ops2);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}