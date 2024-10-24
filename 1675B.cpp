#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int temp=a[n-1];
    int count=0;
    for(int i=n-2;i>=0;i--){
        while(a[i]>=temp && a[i]>0){
            a[i]=a[i]/2;
            count++;
        }
        if(a[i]==temp){
            return -1;
        }
        temp=a[i];
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}