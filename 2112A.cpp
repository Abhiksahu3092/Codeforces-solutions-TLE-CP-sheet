#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(){
    int a,x,y;
    cin>>a>>x>>y;

    if((a>=x && a<=y)||(a>=y && a<=x)){
        return false;
    }

    return true;
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