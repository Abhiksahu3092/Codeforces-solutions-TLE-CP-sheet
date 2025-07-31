#include<bits/stdc++.h>
using namespace std;
#define ll long long

string solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;
    int last_occurence=-1;
    int freq=0;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            last_occurence=i;
            freq++;
        }
    }

    if(s[0]==s[n-1]){
        if(s[0]=='A'){
            return "Alice";
        }
        else{
            return "Bob";
        }
    }
    else if(last_occurence==n-1){
        if(freq==1){
            return "Alice";
        }
        else{
            return "Bob";
        }
    }
    else if(last_occurence==n-2){
        return "Bob";
    }
    else{
        return "Alice";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}