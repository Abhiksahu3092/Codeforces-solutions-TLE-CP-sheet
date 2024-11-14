#include<bits/stdc++.h>
using namespace std;
int solve(){
    string s;
    cin>>s;
    int ones=0;
    int zeroes=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            ones++;
        }
        else{
            zeroes++;
        }
    }

    if(ones==zeroes){
        return 0;
    }

    int j=0;
    while(j<s.size()){
        if(s[j]=='1'&& zeroes>0){
            zeroes--;
        }
        else if(s[j]=='0'&&ones>0){
            ones--;
        }
        else{
            break;
        }
        j++;
    }
    return s.size()-j;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}