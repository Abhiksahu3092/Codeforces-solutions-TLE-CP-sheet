#include<bits/stdc++.h>
using namespace std;

string solve(){
    int k,n;
    cin>>n>>k;

    string s;
    cin>>s;

    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]-'a']++;
    }

    int count=0;
    for(auto it:mp){
        if(it.second%2!=0){
            count++;
        }
    }

    if(count<=k+1){
        return "YES";
    }
    return "NO";
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}