#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n,k;
    cin>>n>>k;

    vector<ll> l(n);
    vector<ll> r(n);
    vector<ll> real(n);
    vector<pair<pair<ll,ll>,ll>> v;
    for(ll i=0;i<n;i++){
        cin>>l[i]>>r[i]>>real[i];
        v.push_back({{l[i],r[i]},real[i]});
    }


    sort(v.begin(), v.end(), [](auto &x, auto &y) {
        if (x.first.first != y.first.first)
            return x.first.first < y.first.first;
        if (x.first.second != y.first.second)
            return x.first.second < y.first.second;
        return x.second < y.second;
    });

    if(k<v[0].first.first){
        return k;
    }

    for(ll i=0;i<n-1;i++){
        if(v[i].first.second < v[i+1].first.first){
            if(k >= v[i].first.second && k < v[i+1].first.first){
                return k;
            }
        }
        else if(v[i].first.second >= v[i+1].first.first && v[i].second < v[i+1].second){
            if(k >= v[i].first.second && k < v[i+1].second){
                return k;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}