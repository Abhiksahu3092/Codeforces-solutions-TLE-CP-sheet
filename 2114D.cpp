#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll calc_area(ll max_x, ll min_x, ll max_y, ll min_y, ll n ) {
    ll l= max_x-min_x+1;
    ll b= max_y-min_y+1;
    if((l*b)<n){
        return min(l*(b+1),b*(l+1));
    }

    return l*b;
}

ll solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> x(n);
    vector<pair<ll,ll>> y(n);

    for(ll i=0;i<n;i++){
        cin>>x[i].first>>y[i].first;
        x[i].second=y[i].second=i;
    }

    sort(x.begin(),x.end());
    sort(y.begin(),y.end());

    ll ans=calc_area(x[n-1].first,x[0].first,y[n-1].first,y[0].first,n);
    if(n==1){
        return ans;
    }

    set<ll> s={x[0].second, x[n-1].second, y[0].second, y[n-1].second};
    for(ll it:s){
        ll max_x= x[n-1].second==it ? x[n-2].first : x[n-1].first;
        ll min_x= x[0].second==it ? x[1].first : x[0].first;
        ll max_y= y[n-1].second==it ? y[n-2].first : y[n-1].first;
        ll min_y= y[0].second==it ? y[1].first : y[0].first;

        ans=min(ans, calc_area(max_x, min_x, max_y, min_y, n));
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