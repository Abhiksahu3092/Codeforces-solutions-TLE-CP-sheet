#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(){
    int n;
    cin>>n;
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(b[i]);
    }

    if(st.size()==n){
        return false;
    }

    return true;
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