#include<bits/stdc++.h>
using namespace std;
int solve(){
    string s;
    cin>>s;
    int n=s.size();

    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            return 1;
        }
    }

    return n;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}