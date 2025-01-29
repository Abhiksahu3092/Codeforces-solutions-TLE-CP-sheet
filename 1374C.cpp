#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int count=0;
    int moves=0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            count++;
        }else{
            count--;
        }

        if(count<0){
            moves++;
            count=0;
        }
    }

    return moves;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}