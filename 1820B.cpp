#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    string s;
    cin>>s;

    s+=s;
    ll n=s.size();
    ll max_size=0;
    ll count=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='1'){
            count++;
        }
        else{
            max_size=max(max_size,min(count,n/2));
            count=0;
        }
    }

    max_size=max(max_size,min(count,n/2));

    if(max_size==0){
        return 0;
    }

    if(max_size==1){
        return 1;
    }

    if(max_size!=(n/2)){
        return ((max_size+1)/2)*((max_size+2)/2);
    }

    return n*n/4;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}