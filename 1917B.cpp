#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    map<char,int> found;
    ll ans=0;
    for(int i=0;i<s.size();i++){
        if(!found[s[i]]){
            ans=ans+1ll*(n-i);
            found[s[i]]=1;
        }
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}