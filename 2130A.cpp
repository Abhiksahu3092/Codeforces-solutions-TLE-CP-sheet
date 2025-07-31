#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
    int n;
    cin>>n;

    vector<int> s(n);
    int zeroes=0;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]==0){
            zeroes++;
        }
        else{
            sum+=s[i];
        }
    }

    return sum+ 1*zeroes;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}