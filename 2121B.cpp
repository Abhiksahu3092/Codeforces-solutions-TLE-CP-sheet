#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    vector<int> hash(26,0);
    for(int i=0;i<n;i++){
        hash[s[i]-'a']++;
    }

    for(int i=1;i<n-1;i++){
        if(hash[s[i]-'a']>1){
            return true;
        }
    }

    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        if(solve()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}