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

    sort(a.begin(),a.end());
    // remove from end
    int count1=0;
    for(int i=n-1;i>=0;i--){
        if((a[i]+a[0])%2!=0){
            count1++;
        }
        else{
            break;
        }
    }

    // remove from start
    int count2=0;
    for(int i=0;i<n;i++){
        if((a[i]+a[n-1])%2!=0){
            count2++;
        }
        else{
            break;
        }
    }

    return min(count1, count2);
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}