#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a;
    int b;
    int c;
    cin>>a>>b>>c;

    a=a+ceil(c/2.0);
    b=b+c/2;
    if(a>b){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }
   
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}