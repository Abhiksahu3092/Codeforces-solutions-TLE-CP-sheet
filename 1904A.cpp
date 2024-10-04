#include<bits/stdc++.h>
using namespace std;

int solve(){
    int a,b;
    cin>>a>>b;

    int xk,yk;
    cin>>xk>>yk;

    int xq,yq;
    cin>>xq>>yq;

    set<pair<int,int>> moves={{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};

    set<pair<int,int>> king,queen;
    for(auto move:moves){
        int x=xk+move.first;
        int y=yk+move.second;

        king.insert({x,y});

        x=xq+move.first;
        y=yq+move.second;
        queen.insert({x,y});
    }

    int ans=0;

    for(auto move:king){
        if(queen.find(move)!=queen.end()){
            ans++;
        }
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