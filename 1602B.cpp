#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll w,h;
    cin>>w>>h;

    int k1;
    cin>>k1;
    vector<ll> bottom(k1);
    for(int i=0;i<k1;i++){
        cin>>bottom[i];
    }

    int k2;
    cin>>k2;
    vector<ll> top(k2);
    for(int i=0;i<k2;i++){
        cin>>top[i];
    }

    ll b1=max(bottom[k1-1]-bottom[0],top[k2-1]-top[0]);
    ll area1=(b1)*h;

    int k3;
    cin>>k3;
    vector<ll> left(k3);
    for(int i=0;i<k3;i++){
        cin>>left[i];
    }

    int k4;
    cin>>k4;
    vector<ll> right(k4);
    for(int i=0;i<k4;i++){
        cin>>right[i];
    }

    ll b2=max(left[k3-1]-left[0],right[k4-1]-right[0]);
    ll area2=(b2)*w;

    return max(area1,area2);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}