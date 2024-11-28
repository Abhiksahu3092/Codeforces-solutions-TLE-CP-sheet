#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(){
    int n,k,q;
    cin>>n>>k>>q;

    vector<int> days(n);
    for(int i=0;i<n;i++){
        cin>>days[i];
    }

    ll count=0;
    ll ans=0;

    for(int i=0;i<n;i++){
        if(days[i]<=q){
            count++;
        }
        else{
            if(count>=k){
                ans+=(count*1ll*(count+1)/2)-(((k-1)*1ll*count)-((k-1)*1ll*(k-2)/2));
            }
            count=0;
        }
    }

    if(count>=k){
        ans+=(count*1ll*(count+1)/2)-(((k-1)*1ll*count)-((k-1)*1ll*(k-2)/2));
    }
        

    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}