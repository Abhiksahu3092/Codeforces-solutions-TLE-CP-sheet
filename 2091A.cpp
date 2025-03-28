#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    vector<int> freq(10,0);
    for(ll i=0;i<n;i++){
        freq[a[i]]++;
        if(freq[0]>=3 && freq[1]>=1 && freq[2]>=2 && freq[3]>=1 && freq[5]>=1){
            return i+1;
        }
    }

    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}