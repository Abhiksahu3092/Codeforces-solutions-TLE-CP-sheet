#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    int count2=0;
    int count3=0;
    int ops=0;
    while(n%2==0){
        n=n/2;
        count2++;
    }

    while(n%3==0){
        n=n/3;
        count3++;
    }

    if(n==1 && count2<=count3){
        ops+=count3-count2;
        ops+=count3;
        return ops;
    }
    else{
        return -1;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}