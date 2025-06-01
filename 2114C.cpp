#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
    int n;
    cin>>n;

    vector<int> a(n);
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }

    vector<int> b;
    for(auto it:s){
        b.push_back(it);
    }

    int prev=0;
    int count=0;
    for(int i=1;i<b.size();i++){
        if(b[i]-b[prev]==1){
            count++;
        }
        else{
            prev=i;
        }
    }

    return b.size()-count;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}