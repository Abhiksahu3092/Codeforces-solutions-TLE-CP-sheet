#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    string st;
    cin>>st;
    int size=0;
    int max_size=INT_MIN;
    int ans=0;
    for(auto &c:st){
        if(c=='#'){
            max_size=max(max_size,size);
            size=0;
            continue;
        }
        else{
            ans++;
            size++;
        }
    }

    max_size=max(max_size,size);
    if(max_size>=3){
        return 2;
    }
    else{
        return ans;
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int ans=solve();
        cout<<ans<<endl;;
    }
}