#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> dp(11,0);

string solve(){
    int n,m;
    cin>>n>>m;
    vector<int> w(m);
    vector<int> l(m);
    vector<int> h(m);
    for(int i=0;i<m;i++){
        cin>>w[i]>>l[i]>>h[i];
    }

    string ans="";
    for(int i=0;i<m;i++){
        if(dp[n]>w[i] || dp[n]>l[i]){
            ans+='0';
        }
        else{
            if((dp[n]+dp[n-1]<=w[i] || dp[n]+dp[n-1]<=l[i])){
                if(dp[n]<=h[i]){
                    ans+='1';
                }
                else{
                    ans+='0';
                }
            }
            else{
                if(dp[n-1]+dp[n]<=h[i]){
                    ans+='1';
                }
                else{
                    ans+='0';
                }
            }


        }
    }

    return ans;
}

int main(){
    int t;
    cin>>t;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<11;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    while(t--){
        cout<<solve()<<endl;
    }
}