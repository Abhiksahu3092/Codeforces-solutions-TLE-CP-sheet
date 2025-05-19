#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll count(vector<ll> a, vector<ll> b, vector<ll> c){
    ll n=a.size();
    ll oneidx,twoidx;
    ll fm=INT_MIN;;
    for(ll i=0;i<n;i++){
        if(a[i]>fm){
            fm=a[i];
            oneidx=i;
        }
    }

    ll sm=INT_MIN;
    for(ll i=0;i<n;i++){
        if(b[i]>sm && i!=oneidx){
            sm=b[i];
            twoidx=i;
        }
    }

    ll tm=INT_MIN;
    for(ll i=0;i<n;i++){
        if(c[i]>tm && i!=oneidx && i!=twoidx){
            tm=c[i];
        }
    }

    return fm+sm+tm;
        
}

ll solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> c(n);

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    for(ll i=0;i<n;i++){
        cin>>c[i];
    }

    ll p1=count(a,b,c);
    ll p2=count(a,c,b);
    ll p3=count(b,a,c);
    ll p4=count(b,c,a);
    ll p5=count(c,a,b);
    ll p6=count(c,b,a);

    return max({p1,p2,p3,p4,p5,p6});
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}