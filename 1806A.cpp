#include<bits/stdc++.h>
using namespace std;

int solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(d<b){
        return -1;
    }
    else{
        int c1=d-b;
        a+=c1;
        b+=c1;
        if(a<c){
            return -1;
        }
        else{
            int c2=a-c;
            return c1+c2;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}