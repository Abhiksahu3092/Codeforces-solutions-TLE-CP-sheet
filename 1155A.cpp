#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    for(int i=1;i<n;i++){
        if(s[i]<s[i-1]){
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    solve();
}