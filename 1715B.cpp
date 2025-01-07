#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,k,b,s;
    cin>>n>>k>>b>>s;

    if(b>floor(double(s)/double(k))){
        cout<<-1<<endl;
    }
    else{
        ll rem_sum=s;
        ll temp=min((k*(b+1))-1,s);
        vector<ll> a(n,0);
        a[0]=temp;
        rem_sum-=temp;
        ll i=1;
        while(i<n && rem_sum>0){
            a[i]=min(k-1,rem_sum);
            rem_sum-=a[i];
            i++;
        }

        if(rem_sum!=0){
            cout<<-1<<endl;
        }
        else{
            for(ll j=0;j<n;j++){
                cout<<a[j]<<" ";
            }
            cout<<endl;
        }       
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}