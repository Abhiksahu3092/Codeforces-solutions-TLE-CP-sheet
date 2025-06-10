#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n,m;
    cin>>n>>m;

    vector<ll> a(m);
    for(ll i=0;i<m;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());
    vector<ll> diff;
    for(ll i=1;i<m;i++){
        diff.push_back(a[i]-a[i-1]-1);
    }

    diff.push_back(n-(a[m-1]-a[0]+1));

    sort(diff.rbegin(), diff.rend());

    ll t=0;
    ll uninfected=0;
    for(ll i=0;i<diff.size();i++){
        if(2*t>=diff[i]){
            diff[i]=0;
        }
        else{
            diff[i]-=2*t;
            if(diff[i]!=1){
                diff[i]--;
                t+=2;
            }
            else{
                t++;
            }
        }
        uninfected+=diff[i];
    }

    return n-uninfected;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}