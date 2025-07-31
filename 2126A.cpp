#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
    int n;
    cin>>n;

    string s = to_string(n);
    int ans = n;
    for(int i =0;i<s.size();i++){
        ans = min(ans, stoi(s.substr(i,1)));
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