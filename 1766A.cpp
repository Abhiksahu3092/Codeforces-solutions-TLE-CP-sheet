#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    int count=0;
    int temp=1;
    while(n/temp>=10){
        count+=9;
        temp=temp*10;
    }

    count+=n/temp;

    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;;
    }
}