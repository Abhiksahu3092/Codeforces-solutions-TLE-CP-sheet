#include<bits/stdc++.h>
using namespace std;

string solve(){
    int n,m;
    cin>>n>>m;

    vector<int> a(n);
    vector<int> b(m);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int j=0;j<m;j++){
        cin>>b[j];
    }

    a[0]=min(a[0],(b[0]-a[0]));
    a[n-1]=max(a[n-1],(b[0]-a[n-1]));

    for(int i=n-2;i>=0;i--){
        if(a[i]>a[i+1] && (b[0]-a[i])>a[i+1]){
            return "NO";
        }
        else if(a[i]<=a[i+1] && (b[0]-a[i])<=a[i+1]){
            a[i]=max(a[i],(b[0]-a[i]));
        }
        else{
            a[i]=min(a[i],(b[0]-a[i]));
        }
    }
    return "YES";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}