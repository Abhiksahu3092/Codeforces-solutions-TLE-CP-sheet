#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    char c;
    cin>>n;
    cin>>c;

    string s;
    cin>>s;

    int idx=-1;
    bool truth=false;
    for(int i=0;i<n;i++){
        if(s[i]==c){
            idx=i+1;
        }
        else{
            truth=true;
        }
    }

    if(truth){
        if(idx<=n/2){
            cout<<2<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
        else{
            cout<<1<<endl;
            cout<<idx<<endl;
        }
    }
    else{
        cout<<0<<endl;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}