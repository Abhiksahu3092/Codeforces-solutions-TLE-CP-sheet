#include<bits/stdc++.h>
using namespace std;
vector<int> xorr(300001);

int solve(){
    int a,b;
    cin>>a>>b;

    int length=a;
    int bitxor=xorr[a-1];
    if(bitxor==b){
        return length;
    }
    else{
        if((bitxor^b)==a){
            return (length+2);
        }
        else{
            return (length+1);
        }
    }
}

int main(){
    int t;
    cin>>t;
    xorr[0]=0;
    for(int i=1;i<=300000;i++){
        xorr[i]=xorr[i-1]^i;
    }
    
    while(t--){
        cout<<solve()<<endl;
    }
}