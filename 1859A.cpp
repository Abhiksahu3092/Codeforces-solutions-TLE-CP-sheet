#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());
    int j=1;
    vector<int> b;
    vector<int> c;
    b.push_back(a[0]);
    while(j<n && a[j]<=a[j-1]){
        b.push_back(a[j]);
        j++;
    }

    while(j<n){
        c.push_back(a[j]);
        j++;
    }

    if(c.size()==0){
        cout<<-1<<endl;
    }
    else{
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int i=0;i<b.size();i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<c.size();i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}