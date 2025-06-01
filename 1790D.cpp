#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);
    set<ll>s;
    map<ll, ll> m;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
        m[a[i]]++;
    }

    ll prev=-1;
    ll ongoing=0;
    ll sets=0;
    vector<ll> b;
    for(auto it:s){
        b.push_back(it);
    }

    sort(b.begin(), b.end());

    for(ll i=0;i<b.size();i++){
        if(b[i]-prev==1){
            if(m[b[i]]>ongoing){
                sets+=(m[b[i]]-ongoing);
            }
        }
        else{
            sets+=m[b[i]];
        }
        ongoing=m[b[i]];
        prev=b[i];
    }

    return sets;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}