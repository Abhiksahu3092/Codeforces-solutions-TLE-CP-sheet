#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    // O(n2) solution
    /*int i=0;
    while(i<=n-3){
        int j=i+1;
        while(j<=n-2 && a[j]<a[i]){
            j++;
        }

        int k=j+1;
        while(k<=n-1 && a[k]>a[j]){
            k++;
        }

        if(j<=n-2 && k<=n-1){
            cout<<"YES"<<endl;;
            cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
            return;
        }

        i++;
    }
    cout<<"NO"<<endl;*/

    for(int i=1;i<n-1;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<" "<<i+2<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}