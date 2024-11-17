#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(){
    int n;
    cin>>n;
    int firstmin=INT_MAX;
    int secondmin=INT_MAX;
    ll sum=0;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        vector<int> a(m);
        for(int j=0;j<m;j++){
            cin>>a[j];
        }
        sort(a.begin(),a.end());
        firstmin=min(firstmin,a[0]);
        secondmin=min(secondmin,a[1]);
        sum+=a[1];
    }

    return sum-secondmin+firstmin;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}