#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(){
    string s;
    cin>>s;

    ll n=s.size();
    map<char,ll> mp;
    ll index=n;
    for(int i=0;i<n;i++){
        if(mp[s[i]]!=0){
            index=i;
            break;
        }
        mp[s[i]]++;
    }

    for(ll i=index;i<n;i++){
        if(s[i]!=s[i%index]){
            return false;
        }
    }

    return true;
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