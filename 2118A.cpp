#include<bits/stdc++.h>
using namespace std;
#define ll long long

string solve(){
    int n,k;
    cin>>n>>k;

    string ans="";
    int ones=k;
    int zeroes=n-k;
    if(ones>=1){
        ans+='1';
        ones--;
    }
    while(zeroes>1){
        ans+='0';
        zeroes--;
    }

    while(ones>0){
        ans+='1';
        ones--;
    }

    if(zeroes==1){
        ans+='0';
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