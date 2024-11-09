#include<bits/stdc++.h>
using namespace std;
string solve(){
    string s;
    cin>>s;
    int zeroes=0;
    int ones=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            zeroes++;
        }else{
            ones++;
        }
    }

    int ops=min(zeroes,ones);
    if(ops%2==0){
        return "NET";
    }
    else{
        return "DA";
    }
        
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}