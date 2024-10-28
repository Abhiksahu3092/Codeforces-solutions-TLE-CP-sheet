#include<bits/stdc++.h>
using namespace std;

string solve(){
    string s;
    cin>>s;
    int countab=0;
    int countba=0;
    int n=s.size();
    for(int i=0;i<n-1;i++){
        if(s[i]=='a' && s[i+1]=='b'){
            countab++;
        }
        if(s[i]=='b' && s[i+1]=='a'){
            countba++;
        }
    }

    if(countab==countba){
        return s;
    }
    else if(countab>countba){
        s[0]='b';
        return s;
    }
    else{
        s[0]='a';
        return s;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}