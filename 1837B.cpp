#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int length=1;
    int max_length=1;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            length++;
        }
        else{
            length=1;
        }
        max_length=max(max_length,length);
    }
    return max_length+1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}