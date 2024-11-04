#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
    int n,m,i,j;
    cin>>n>>m>>i>>j;
    vector<pair<int,int>> v={{1,1},{1,m},{n,1},{n,m}};
    ll maxi=0;
    int fx1,fx2,fy1,fy2;
    for(int a=0;a<3;a++){
        int x1=v[a].first;
        int y1=v[a].second;
        ll d1=abs(x1-i)+abs(y1-j);
        for(int b=a+1;b<4;b++){
            int x2=v[b].first;
            int y2=v[b].second;
            ll d2=abs(x2-i)+abs(y2-j);
            ll d3=abs(x1-x2)+abs(y1-y2);
            ll d=d1+d2+d3;
            if(d>=maxi){
                maxi=d;
                fx1=x1;
                fx2=x2;
                fy1=y1;
                fy2=y2;
            }
        }
    }

    cout<<fx1<<" "<<fy1<<" "<<fx2<<" "<<fy2<<endl;
    //cout<<maxi<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}