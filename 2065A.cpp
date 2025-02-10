#include<bits/stdc++.h>
using namespace std;
// code submitted by Abhik

string solve(){
    string w;
    cin>>w;

    string ans="";
    int n=w.size();
    for(int i=0;i<n-2;i++){
        ans+=w[i];
    }
    ans+='i';
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}