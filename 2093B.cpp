#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    string s;
    cin>>s;

    ll n=s.size();
    ll ans=0;
    ll i=n-1;
    while((s[i]-'0')==0){
        ans++;
        i--;
    }

    i--;
    while(i>=0){
        if((s[i]-'0')!=0){
            ans++;
        }
        i--;
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