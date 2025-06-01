#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(){
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;
    int ones=0;
    int zeroes=0;
    for(char ch:s){
        if(ch=='1'){
            ones++;
        }
        else{
            zeroes++;
        }
    }

    int temp=abs(ones-zeroes)/2;
    if(k>=temp && (k-temp)%2==0){
        return true;
    }
    else{
        return false;
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