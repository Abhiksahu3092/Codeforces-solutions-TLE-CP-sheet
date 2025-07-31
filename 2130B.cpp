#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,s;
    cin>>n>>s;

    vector<ll> a(n);
    ll sum=0;
    ll ones=0;
    ll zeroes=0;
    ll twos=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            zeroes++;
        }
        else if(a[i]==1){
            ones++;
        }
        else if(a[i]==2){
            twos++;
        }
        sum+=a[i];
    }

    s=s-sum;
    ll x=0;
    bool flag=true;
    while(2*x<=s){
        ll temp = s -2*x;
        if(temp %3 == 0){
            flag=false;
            break;
        }
        x++;
    }

    if(!flag){
        cout<<-1<<endl;
    }
    else{
        vector<ll> ans;
        while(zeroes>0){
            ans.push_back(0);
            zeroes--;
        }

        while(ones>0 && twos>0){
            ans.push_back(2);
            ans.push_back(1);
            ones--;
            twos--;
        }

        while(ones>0){
            ans.push_back(1);
            ones--;
        }

        while(twos>0){
            ans.push_back(2);
            twos--;
        }

        int size=ans.size();
        for(int i=0;i<size;i++){
            cout<<ans[i]<<" ";
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