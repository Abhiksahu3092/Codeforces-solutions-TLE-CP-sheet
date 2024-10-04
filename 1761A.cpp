#include<bits/stdc++.h>
using namespace std;

string solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if(n==a && n==b){
        return "YES";
    }
    else{
        int temp=a+b;
        if(n-temp<=1){
            return "NO";
        }
        else{
            return "YES";
        }
    }
    return "";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}