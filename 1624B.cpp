#include<bits/stdc++.h>
using namespace std;
#define ll long long 
string solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(b<(a+c)/2.0){
        if((a+c)%(2*b)==0){
            return "YES";
        }
        else{
            return "NO";
        }
    }
    else if(b>(a+c)/2.0){
        if((2*b-a)%c==0 || (2*b-c)%a==0){
            return "YES";
        }
        else{
            return "NO";
        }
    }
    else{
        return "YES";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}