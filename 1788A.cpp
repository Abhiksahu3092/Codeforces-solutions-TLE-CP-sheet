#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==2){
            count++;
        }
    }

    if(count%2!=0){
        return -1;
    }

    if(count==0){
        return 1;
    }

    int temp=0;
    int index;
    for(int i=0;i<n;i++){
        if(a[i]==2){
            temp++;
        }

        if(temp==count/2){
            index=i+1;
            break;
        }
    }

    return index;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}