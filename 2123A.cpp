#include<bits/stdc++.h>
using namespace std;
#define ll long long

string solve(){
    int n;
    cin>>n;

    if(n%4==0){
        return "Bob";
    }

    return "Alice";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}