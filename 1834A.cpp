#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int onecount=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            onecount++;
        }
    }

    int changes=0;

    int temp=ceil(n/2.0);

    if(temp>onecount){
        changes=temp-onecount;
        onecount=temp;
    }

    if((n-onecount)%2==0){
        return changes;
    }

    return changes+1;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}