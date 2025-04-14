#include<bits/stdc++.h>
using namespace std;
#define ll long long

string solve(){
    string s1;
    string s2;
    string s3;

    cin>>s1;
    cin>>s2;
    cin>>s3;

    string ans="";
    ans+=s1[0];
    ans+=s2[0];
    ans+=s3[0];

    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}