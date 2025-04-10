#include<bits/stdc++.h>
using namespace std;
#define ll long long
// code submitted by Abhik

bool check(int n) {
    if (n <= 1){
        return false;
    }
    if (n == 2 || n == 3){
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0){
        return false;
    }

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int solve(){
    int x,k;
    cin>>x>>k;

    if(x==1){
        string s="";
        for(int i=1;i<=k;i++){
            s+='1';
        }

        int n=stoi(s);
        if(check(n)){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        if(k>1){
            return false;
        }
        else{
            if(check(x)){
                return true;
            }
            else{
                return false;
            }
        }
    }
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